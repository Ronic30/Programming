# List: Ordered, Mutable, Allow duplicates.

ages = [19, 26, 29]
print(ages)
print('Total items : ', len(ages))

info = ['Jack', 32, 'Computer Science', [2, 4]]
print('Student Name : ', info[0])
print('Course : ', info[2])
print('Student Age : ', info[-3])

# Slicing in list :

lists = ['a', 'b', 'c', 'd', 'e', 'f']
print(lists[1:4])
print(lists[1:-2])
print(lists[3:])
print(lists[:-2])

# Adding Elemnents in a List :

fruits = ['Apple', 'Banana', 'Orange']
print('Before : ', fruits)

fruits.append('Cherry')
print('After : ', fruits)

# Adding Element at a Specific Index :

student = ['Rahul', 'Shyam', 'Ramu']
print('Before : ', student)

student.insert(2, 'Chintu')
print('After : ', student)

# Changing the List Items :

colors = ['Red', 'Blue', 'Black']
print('Before : ', colors)

colors[1] = 'Orange'
colors[2] = 'White'
print('After : ', colors)

# Removing Item from the List :

info1 = ['Back', 20, 'Computer Application', [2, 4]]
print('Before : ', info1)

del info1[2:4]
print('After : ', info1)

# Iterating through a List :

colors = ['Red', 'Blue', 'Black']
for i in colors:
    print(i)