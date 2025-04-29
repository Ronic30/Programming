items = ["cars", "bike", 365, 234, 100, "truck"]
items[2] = "super bike"
print(items)

items.append("yart")
print(items)

num = [23, 45,12, 0, 1, 104]
num.sort()
num.reverse()
num.insert(4, 1000)
print(num.pop(2))
num.remove(104)
del num[1]
print(num)

fruits = []

a1 = input("Enter a Fruit name :")
fruits.append(a1)
a2 = input("Enter a Fruit name :")
fruits.append(a2)
a3 = input("Enter a Fruit name :")
fruits.append(a3)
a4 = input("Enter a Fruit name :")
fruits.append(a4)
a5 = input("Enter a Fruit name :")
fruits.append(a5)

print(fruits)