s1 = "acbd"
s2 = s1 + s1[0]
print(s2)

# multi lined string :
string1 = """Hello,
I'm bot"""
print(string1)

# accessing string in python :
string2 = "tab cat"
print(string2[3], string2[4], string2[-2])

# string slicing :
print(string2[1:5])
print(string2[1:])
print(string2[::-1])

# string immutability :
string3 = "hello sir, what's name?"
string3 = "H" + string3[1:6]
print(string3)

# deletion :
string4 = "hmm"
del string4

# updating a string :
string5 = "hello, rohan"
s10 = string5.replace("hello", "HELLO")
print(string5)
print(s10)

# upper and lower case :
h = "Hello World!"
print(h.upper())
print(h.lower())

# replacing the space :
f = "               ohhh!                  "
print(f)
print(f.strip())

# concatenating :
l1 = "Namaste"
l2 = "Dostoooo"
l3 = l1 + " " + l2
print(l3)

# formatting string
name = "laalu"
age = 69
print(f"Name : {name}, Age : {age}")

q1 = "Name of a thief is {} and his age is {}". format("Laalu", 69)
print(q1)

# in keyword
h4 = "kya haal hai bhai ke!"
print("haal" in h4)
print("hello" in h4)
print("bhai" in h4)