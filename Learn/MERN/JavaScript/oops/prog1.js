// const user = {
//     name : "R",
//     id : 201,

//     getUserDetails : function(){
//         console.log(`username : ${this.name}`)
//         console.log(this)
//     }
// }
// console.log(user.name)
// console.log(user.id)
// console.log(user.getUserDetails())
// console.log(this)

function user(username, loginCount, isLoggedIn){
    this.username = username
    this.loginCount = loginCount
    this.isLoggedIn = isLoggedIn
    return this // OPTIONAL
}
// const userOne = user("X", 4, true)
// const userTwo = user("Y", 9, false) // THIS WILL RESULT IN OVERWRITE IN PROGRAM

const userOne = new user("X", 5, true)
const userTwo = new user("Y", 8, false)
console.log(userOne.constructor)
console.log(userTwo)