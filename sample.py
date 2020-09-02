import requests, json
url = "https://unriddle.me/json_data"

data = requests.get(url)

injson = data.json()
datos = injson["data"]
print("First Name: " + injson["first_name"], "\nLast name: " + injson["last_name"])
print("Age: " + str(datos["age"]))
print("Nationality: " + str(datos["nationality"]))
print("Address: " + injson['address'])