
import tweepy, time, sys

#consumer key
cons_key = 'ejpx7EvLOs0VfagFNw5MHfI1H'
#consumer secret
cons_secret = 'W0j1VktG0NeQkY6vR7xcz2b0xA4CdR9FgEanF4xxshqYMukVZ2'
#access token
access_token = '779561677071216640-wCPOlBEoTCNVbDbCALhFxjLaAHYkgKR'
#access token secret
access_token_secret = 'M4q4FFpT4zDf4LSZt48fHA2rwtL4nSXwWnVOy6LQPOzIK'

arg_file = str(sys.argv[1])

auth = tweepy.OAuthHandler(cons_key, cons_secret)
auth.set_access_token(access_token, access_token_secret)
api = tweepy.API(auth)

filename = open(arg_file, 'r')
f = filename.readlines()
filename.close()

for line in f:
	api.update_status(line)
	time.sleep(60)