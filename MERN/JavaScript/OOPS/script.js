class fish{
    constructor(name){
        this.name = name;
    }

    quality1(){
        console.log("I can swim");
    }

    quality2(){
        console.log("I can live under the water");
    }
}

class fish1 extends fish{
    constructor(name){
        super()
        this.name = name;
    }

//     quality3(){
//         console.log("We consume oxygen in liquid form");
//     }
}


let a = new fish ("Bady Shark");
console.log(a);
let a1 = new fish1 ("Shark");
console.log(a1);
