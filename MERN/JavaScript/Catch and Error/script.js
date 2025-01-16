let a = prompt("Enter the First Number : ")
let b = prompt("Enter the Second Number : ")
if(isNaN(a) || isNaN(b)){
    throw new SyntaxError("Sorry Input is wrong")
}
let sum = parseInt(a) + parseInt(b)
console.log("Sum : ", sum)
