info = {
    "name" : "darvid",
    "age" : 39,
    "city" : "NYC"
}

# print(info["age"]) #if key doesn't exist it will give error
# print(info.get("age")) #if key doesn't exist it will give none

# info["city"] = "Boston"
# print(info)

# info["job"] = "ceo"
# print(info)

# info.update({"age" : 42})
# print(info)

# del info["age"]
# print(info)

print(info.items())
print(info.keys())
print(info.values())

for key in info:
    print(key)
for value in info.values():
    print(value)

for key, value in info.items():
    print(f"{key}:{value}")

