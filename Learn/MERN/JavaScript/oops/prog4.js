class user{
    constructor(name){
        this.name = name
    }
}
class teacher extends user{
    constructor(name, email, password){
        super(name)
        this.email = email
        this.password = password
    }
    addCourse(){
        return `Course is added by ${this.name}`
    }
}
const userOne = new teacher("T", "t@gmail.com", 123400)
console.log(userOne)