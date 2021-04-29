import requests
from random import choice
import pyfiglet

header = pyfiglet.figlet_format("LAME JOKES 3000!")                 
print(header)

user_input = input("what would you like to search for? ")     
url = "https://icanhazdadjoke.com/search"
res = requests.get(
	url, 
	headers={"Accept":"application/json"},
	params={"term":user_input}
).json() 

num_jokes = res["total_jokes"]
results = res["results"]
if num_jokes > 1:
	print(f"I found {num_jokes} jokes about {user_input}. here's one:")
	print(choice(results)["joke"])
elif num_jokes == 1:
	print(f"I found one joke about {user_input}")
	print(results[0]["joke"])
else:
	print(f"Sorry, couldn't find a joke with your term: {user_input}")
