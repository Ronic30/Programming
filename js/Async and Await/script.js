  async function getData(){
    return new Promise((resolve,reject) => {
        setTimeout(() =>{
            console.log("Signed in Successfully")
            resolve("Success")
        }, 3000)
    })
}

async function main(){
    console.log("Enter Your ID and Password")
    let val = await getData()
    console.log(val)
    console.log("Thanks for Signing in")
}

main() 