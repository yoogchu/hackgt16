
import time, sys, json
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


# try:
# 	arg_status = str(sys.argv[1])
# 	api.update_status(arg_status)
# except IndexError:
# 	print("No arg specified")

# api.statuses.update(status = "testing new twitter tools")

result_search = api.search.tweets(q="@pythonmcbotty")

# tweets = result_search['description']['user']['screen_name']
reply_to = []
a = 0


for i in result_search['statuses']:
	reply_to.append({"id": result_search['statuses'][a]['id'],
		"name" : result_search['statuses'][a]['user']['screen_name']
		, "msg" : result_search['statuses'][a]['text']
		})
	a = a + 1

reply_id = [li['id'] for li in reply_to]
reply_sname = [li['name'] for li in reply_to]
reply_msg = [li['msg'] for li in reply_to]

a = 0
for x in reply_msg:
	x = x.split("@pythonmcbotty")
	x = x[1:]
	reply_msg[a] = x
	a += 1

# print(reply_id)
# print(reply_sname)
# print(reply_msg)

reply = True

for x in range(0,len(reply_id)):
	with open('responded_id.txt', 'r') as outfile:
		for line in outfile:
			data = json.loads(line)

			if data["id"] == reply_id[x]:
				print("match!: " + data['id'] + " & " + reply_id[x])
				reply = False
		outfile.close()

	if reply == True:
		api.statuses.update(status = "@" + reply_sname[x] + "  fuk ur ass xD " + str(x),
		in_reply_to_status_id = reply_id[x])
		
		with open('responded_id.txt', 'a') as outfile:
			outfile.write("{}\n".format(json.dumps({"id": result_search['statuses'][x]['id'],
			"name" : result_search['statuses'][x]['user']['screen_name']
			, "msg" : result_search['statuses'][x]['text']
			}))