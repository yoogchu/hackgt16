from chatterbot import ChatBot

chatbot = ChatBot(
    'Ron Obvious',
    trainer='chatterbot.trainers.ChatterBotCorpusTrainer'
)

# Train based on the english corpus
chatbot.train("chatterbot.corpus.english")
chatbot.train("chatterbot.corpus.english.greetings")
chatbot.train("chatterbot.corpus.english.conversations")

# Get a response to an input statement
chatbot.get_response("Hello, how are you today?")
