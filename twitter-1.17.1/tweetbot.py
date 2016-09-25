
import time, sys, json, random, requests
from twitter import *
from urllib2 import urlopen

#consumer key
cons_key = 'ejpx7EvLOs0VfagFNw5MHfI1H'
#consumer secret
cons_secret = 'W0j1VktG0NeQkY6vR7xcz2b0xA4CdR9FgEanF4xxshqYMukVZ2'
#access token
access_token = '779561677071216640-wCPOlBEoTCNVbDbCALhFxjLaAHYkgKR'
#access token secret
access_token_secret = 'M4q4FFpT4zDf4LSZt48fHA2rwtL4nSXwWnVOy6LQPOzIK'


api = Twitter(auth=OAuth(access_token, access_token_secret, cons_key, cons_secret))

auth = OAuth(
			 consumer_key='ejpx7EvLOs0VfagFNw5MHfI1H',
			 consumer_secret='W0j1VktG0NeQkY6vR7xcz2b0xA4CdR9FgEanF4xxshqYMukVZ2',
			 token='779561677071216640-wCPOlBEoTCNVbDbCALhFxjLaAHYkgKR',
			 token_secret='M4q4FFpT4zDf4LSZt48fHA2rwtL4nSXwWnVOy6LQPOzIK'
			 )
twitter_userstream = TwitterStream(auth=auth, domain='userstream.twitter.com')

def parseMsg(msg):
	msg = msg[0].split()
	try:
		print("command: " + msg[0] +" "+ msg[1] +" "+ msg[2])
	except IndexError:
		print("command: " + msg[0])
	command = msg[0]
	if command.lower() == 'status':
		reply = flightStatus(msg[1:])
	elif command.lower() == 'guess':
		reply = estimate(msg[1:])
	else:
		reply = "Command not recognized"
	return reply

def flightStatus(msg):
	
	data = {
		'apikey' : 'wbLxNGwc1sLaeagn9KZaDT8Bn57aMZGA',
		'flightNumber' : msg[0],
		'flightDate' : msg[1]
	}
	url = 'https://demo30-test.apigee.net/v1/hack/status?flightNumber={flightNumber}&flightOriginDate={flightDate}&apikey={apikey}'.format(**data)

	res = urlopen(url)
	jsonOutput = json.load(res)

	# print(jsonOutput['flightStatusResponse']['statusResponse']['flightStatusTO']['flightStatusLegTOList']['departureGate'])
	# print(jsonOutput['flightStatusResponse']['statusResponse']['flightStatusTO']['flightStatusLegTOList']['arrivalLocalTimeEstimatedActual'])
	# print(jsonOutput['flightStatusResponse']['statusResponse']['flightStatusTO']['flightStatusLegTOList']['departureLocalTimeEstimatedActualString'])

	try:
		departGate = jsonOutput['flightStatusResponse']['statusResponse']['flightStatusTO']['flightStatusLegTOList']['departureGate']
	except KeyError:
		departGate = 'TBA'

	try:
		departTime = jsonOutput['flightStatusResponse']['statusResponse']['flightStatusTO']['flightStatusLegTOList']['departureLocalTimeScheduled']
		departStatus = jsonOutput['flightStatusResponse']['statusResponse']['flightStatusTO']['flightStatusLegTOList']['departureLocalTimeEstimatedActualString']
	except KeyError:
		return "Flight information could not be found." 

	reply = "Gate: " + departGate + " Departure Time: " + departTime[11:16] + " " + departStatus
	return reply

def estimate(msg):
	reply = tsa(msg[1])
	# travelTime('Toronto', 'Montreal')

	return "Estimated time in TSA: " + str(reply) + " min."

# def travelTime(start, stop):
# 	data = {
# 	'apikey' : 'AIzaSyBpyCdaI3Zg1jLKbUThrqpeaJPFh3YjOPM',
# 	'origin' : start,
# 	'dest' : stop,
# 	}

# 	url = 'https://maps.googleapis.com/maps/api/directions/json?origin={origin}&destination={dest}&key={apikey}'.format(**data)
# 	# url = 'https://maps.googleapis.com/maps/api/directions/json?origin=Toronto&destination=Montreal&key=AIzaSyBpyCdaI3Zg1jLKbUThrqpeaJPFh3YjOPM'
# 	res = urlopen(url)
# 	jsonOutput = json.load(res)
# 	# return jsonOutput
# 	print(jsonOutput)
# 	#return jsonOutput['routes'][0]['duration']['text']

#avg time of avg time of all gates
def tsa(airport):
	data = {
		'apikey' : 'wbLxNGwc1sLaeagn9KZaDT8Bn57aMZGA',
		'airport' : airport
	}
	url = 'https://demo30-test.apigee.net/v1/hack/tsa?airport={airport}&apikey={apikey}'.format(**data)
	res = urlopen(url)
	jsonOutput = json.load(res)

	try:
		tsa = jsonOutput['WaitTimeResult']
		print(tsa)
	except KeyError:
		print('key error tsa')
		return None

	times = []

	#avg wait times for each gate, avged
	for gate in tsa:
		try:
			x = gate['waitTime'].split()[0]
		except KeyError:
			continue
		x = x.split('+')[0]
		y = x.split('-')
		if len(y) == 2:
			x = (int(y[0]) + int(y[1]))/2
		else:
			x = int(x)
		times.append(x)
	return sum(times)/len(times)
def travelTime(start, stop):
    data = {
        'apikey' : 'AIzaSyB7YL2a1aspx3BRG542p3J7C6fsVTRTbEc',
        'origin' : start,
        'dest' : stop
    }
    url = 'https://maps.googleapis.com/maps/api/directions/json?origin={origin}&destination={stop}&key={apikey}'.format(**data)
        
    res = urlopen(url)
    jsonOutput = json.load(res)
    return jsonOutput['routes']['duration']['text']

while(True):

	#if mentioned
	result_search = api.search.tweets(q="@pythonmcbotty")

	reply_to = []
	#creating the list of dictionaries
	a = 0
	for i in result_search['statuses']:
		reply_to.append({"id": result_search['statuses'][a]['id'],
			"name" : result_search['statuses'][a]['user']['screen_name']
			, "msg" : result_search['statuses'][a]['text']
			})
		a = a + 1

	#parsing
	reply_id = [li['id'] for li in reply_to]
	reply_sname = [li['name'] for li in reply_to]
	reply_msg = [li['msg'] for li in reply_to]


	#filter out the mention tag
	a = 0
	for x in reply_msg:
		x = x.split("@pythonmcbotty")
		x = x[1:]
		reply_msg[a] = x
		a += 1

	#for debugging
	# print(reply_id)
	# print(reply_sname)
	# print(reply_msg)

	# creating the database
	# with open('responded_id.json', "w") as outfile:
	#     for data in reply_to:
	#         outfile.write("{}\n".format(json.dumps(data)))

	reply_boo = True
	reply = ""

	for x in range(0,len(reply_id)):
		with open('responded_id.json', 'r') as outfile:
			for line in outfile:
				data = json.loads(line)
				if data['id'] == reply_id[x]:
					# print("match!: " + str(data['id']) + " & " + str(reply_id[x]))
					reply_boo = False
			outfile.close()

		if reply_boo == True:

			reply = parseMsg(reply_msg[x])

			#send tweet
			api.statuses.update(status = "@" + reply_sname[x] + " " + reply,
			in_reply_to_status_id = reply_id[x])
			
			if reply is not None:
				with open('responded_id.json', 'a') as outfile1:
					outfile1.write("{}\n".format(json.dumps({"id": result_search['statuses'][x]['id'],
					"name" : result_search['statuses'][x]['user']['screen_name']
					, "msg" : result_search['statuses'][x]['text']
					})))
				outfile1.close()
				print('added: ' + result_search['statuses'][x]['user']['screen_name'] + " " + result_search['statuses'][x]['text'])
				print('replied: ' + reply)

	print('sleeping...')
	time.sleep(10)
	print('waking up!')
