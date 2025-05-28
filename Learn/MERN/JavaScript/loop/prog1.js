for(let i = 0; i < 5; i++){
    console.log(i + 1, "Hi")
}


let sum = 0
for(let j = 0; j <= 1000; j++){
    sum = sum + j
}
console.log(sum)


const name = ["X", "Y", "Z"]
for(let a = 0; a < name.lenght; a++){
    console.log(name[a])
}


// WHILE LOOP

let i = 1
while(i < 5){
    console.log(i)
    i++
}

// let num = 0, sum2 = 0
// while(num >= 0){
//     sum2 += num
//     num = parseInt(prompt("Enter a Number : "))
// }
// console.log(`The sum is ${sum2}`)


// DO WHILE LOOP

let x = 5
do{
    console.log("Hi")
    x++
}
while(x < 10)

// let num1 = 0, sum2 = 0;
// do{
//     sum2 += num1
//     num1 = parseInt(prompt("Enter a Number : "))
// }
// while(num1 >= 0)
// console.log(`The sum is ${sum2}`)


// FOR OF LOOP : ITERATE THROUGH THE VALUES OF AN ITERABLE

const students = ["A", "B", "C", "D"]
for(let i of students){
    console.log(i)
}

const text = "hello"
for(let j of text){
    console.log(j)
}

// FOR IN LOOP

const student = {
    name : "R",
    class : 12
}
for(let i in student){
    console.log(student[i])
}

for(let i in student){
    console.log(`${i} => ${student[i]}`)
}