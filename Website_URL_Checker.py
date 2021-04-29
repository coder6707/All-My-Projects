import requests
url = input("Enter url: ")
url = "https://" + url
response = requests.get(url)
print("Informational responses (100–199) \n Successful responses (200–299) \n Redirects (300–399) \n Client errors (400–499) \n Server errors (500–599)")
print(f"your request to {url}  came back w/ status code {response.status_code}")
