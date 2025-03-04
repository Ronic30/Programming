// it is the solution to the callback hell

console.log("Start writing the script : ")

let prom = new Promise((resolve, reject) => {
    let a = Math.ceil(1 + Math.random() * 100)
    if(a > 50){
        reject("No random number is supporting you!")
        console.log(a)
    }
    else{
        // setTimeout(() => {
        //     console.log("Yes I'm done")
        //     resolve("Worked")
        // },2000)
        resolve("random number")
        console.log(a)
    }
})

prom.then((a1) => {console.log(a1)})
.catch((a2) => {console.log(a2)})