function setUserName(name){
    this.name = name
}

function createUser(name, email, password){
    setUserName.call(this, name)
    this.email = email
    this.password = password
}
const user = new createUser("U", "u@gmail.com", 123455)
console.log(user)