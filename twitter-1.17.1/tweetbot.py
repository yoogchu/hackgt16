
import time, sys, json, random, requests
from twitter import *

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
	print("command: " + msg[0])
	command = msg[0]
	if command.lower() == 'status':
		reply = flightStatus(msg[1:])

	return reply
def flightStatus(msg):
	return ('no current information for: ' + str(msg))

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
	# reply = ['Hello :)', 'Hi!', 'Have a great day!', 'Thanks! You\'re Awesome!', ':D', 'BANGBANGBANGBANG YOURE ONE UNLUCKY MOTHERFUCKER']
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

			api.statuses.update(status = "@" + reply_sname[x] + " " + reply,
			in_reply_to_status_id = reply_id[x])
			
			with open('responded_id.json', 'a') as outfile1:
				outfile1.write("{}\n".format(json.dumps({"id": result_search['statuses'][x]['id'],
				"name" : result_search['statuses'][x]['user']['screen_name']
				, "msg" : result_search['statuses'][x]['text']
				})))
			outfile1.close()
			print('added: ' + result_search['statuses'][x]['user']['screen_name'] + " " + result_search['statuses'][x]['text'])

	print('sleeping...')
	time.sleep(10)
	print('waking up!')
