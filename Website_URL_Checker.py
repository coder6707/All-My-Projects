import requests
url = input("Enter url: ")
url = "https://" + url
response = requests.get(url)

print(f"your request to {url}  came back w/ status code {response.status_code}")