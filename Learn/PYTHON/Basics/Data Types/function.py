# def greet(name):
#     print("Good morning", name)
# greet("Rohan")
# greet("Andres")
# greet("Hattori")



# def a1():
#     num = int(input("Enter a Number for its 2x : "))
#     return num * 2
# a = a1()
# print(a)

def greatest():
    num1 = int(input("Enter the Number : "))
    num2 = int(input("Enter the Number : "))
    num3 = int(input("Enter the Number : "))

    if(num1 > num2 and num1 > num3):
        print("First number is Greatest")
    elif(num2 > num1 and num2 > num3):
        print("Second number is Greatest")
    else:
        print("Third number is Greatest")

greatest()