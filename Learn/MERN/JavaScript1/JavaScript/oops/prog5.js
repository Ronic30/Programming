class user{
    constructor(name){
        this.name = name
    }

    logMe(){
        return `Username : ${this.name}`
    }

    static createId(){ // static WILL LIMIT THE ACCESS
        return `123`
    }
}

// const userOne = new user("Q")
// console.log(userOne.logMe())
// console.log(userOne.createId())

class teacher extends user{
    constructor(name, email){
        super(name)
        this.email = email
    }
}

const userTwo = new teacher("P", "p@gmai.com")
console.log(userTwo)
console.log(userTwo.logMe())
console.log(userTwo.createId())