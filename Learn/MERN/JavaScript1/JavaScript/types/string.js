const string = "Hello World!"
console.log(string)

const name = "X"
const greet = `Hello! Mr.${name}`
console.log(greet)

const one = "O"
const two = "P"
const join = `${one}${two}`
console.log(join)

const greeting = "Hello"
const user = "R"
console.log(greeting, user)
console.log(greeting + " " + user)
console.log(`${greeting} ${user}`)


const browser = "Google Chrome"
console.log(browser.length)
console.log(browser[0])

if(browser.includes("rome")){ // WE CAN OTHER FUNC LIKE startsWith, endsWith etc
    return console.log("True")
}
else{
    return console.log("False")
}


const company = "Microsoft"
console.log(company.slice(5, 9))


