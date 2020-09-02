import requests, json
url = "https://studyour.codes/publicAPI"

data = requests.get(url)

parser = data.json()

for sites in parser:
	print("Title:", sites["title"])
	print("URL:", sites["url"])
	print("")