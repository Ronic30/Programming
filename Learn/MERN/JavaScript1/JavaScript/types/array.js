const myArr = [0, 1, 2, 3, 4]
const user = ["R", "O", "H", "A", "N"]
console.log(myArr)
console.log(user)
console.log(user[2])
user[2] = "X"
console.log(user)


const random = ["tree", 795, [0, 5, 2]]
console.log(random[2][2])
console.log(random[2][1])

console.log(random.indexOf(795))
console.log(random.indexOf(50)) // WILL GIVE -1 AS A OUTPUT BECAUSE IT IS NOT IN THE ARRAY


const student = ["Q", "W", "Y", "A", "D"]
student.push("O")
student.unshift("L") // TO INSERT ELEMENT TO THE START OF AN ARRAY
console.log(student)

student.pop()
student.shift() // TO REMOVE ELEMENT FROM THE START OF AN ARRAY
console.log(student)
student.splice(2)
console.log(student)