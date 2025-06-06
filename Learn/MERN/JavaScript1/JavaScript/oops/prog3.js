class user{
    constructor(name, email, password){
        this.name = name
        this.email = email
        this.password = password
    }
    encryptPassword(){
        return `${this.password}abc`
    }
    changeUserName(){
        return `${this.name.toLowerCase()}`
    }

}

const userOne = new user("F", "f@gmail.com", 123)
console.log(userOne)
console.log(userOne.encryptPassword())
console.log(userOne.changeUserName())