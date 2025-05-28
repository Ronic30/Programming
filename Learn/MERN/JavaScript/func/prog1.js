function greet(){
    console.log("Hello World")
}
let displayName = function(){
    console.log("R")
}
greet()
displayName()

function praise(name){
    console.log(`Great Job ${name}`)
}
praise("x")

function sum(num1, num2){
    add = num1 + num2
    console.log(add)
}
sum(10 ,9)

// Challenge: Write a function to calculate the factorial of a number.

function facto(num){
    let m = 1
    for(let i = 1; i <= num; i++){
        m = m * i
    }
    console.log(m)
}
facto(5)