
import time, sys
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
	reply_to.append({"id": result_search['statuses'][a]['id'], "name" : result_search['statuses'][a]['user']['screen_name']})
	a = a + 1

status_id = [li['id'] for li in reply_to]
status_sname = [li['name'] for li in reply_to]
print(status_id)
print(status_sname)

for x in range(0,len(status_id)):
	api.statuses.update(status = "@" + status_sname[x] + " i am sentient " + str(x),
		in_reply_to_status_id = status_id[x])


# x = api.statuses.home_timeline()

# print(x)
# # The first 'tweet' in the timeline
# x[0]

# # The screen name of the user who wrote the first 'tweet'
# print(x[0]['user']['screen_name'])