async function a(){ 
    return new Promise((resolve, reject) => {
    setTimeout(() =>{
        resolve("Intializing Hacking",)
    }, 2000)
})
}
async function b(){ 
    return new Promise((resolve, reject) => {
    setTimeout(() =>{
        resolve("Reading your Files")
    }, 2000)
})
}
async function c(){ 
    return new Promise((resolve, reject) => {
    setTimeout(() =>{
        resolve("Password files Detected")
    }, 2000)
})
}
async function d(){ 
    return new Promise((resolve, reject) => {
    setTimeout(() =>{
        resolve("Sending all passwords and personal files to server")
    }, 2000)
})
}
async function e(){ 
    return new Promise((resolve, reject) => {
    setTimeout(() =>{
        resolve("Cleaning up")
    }, 2000)
})
}

async function oupt(){
    let aa = await a()
    console.log(aa)
    let bb = await b()
    console.log(bb)
    let cc = await c()
    console.log(cc)
    let dd = await d()
    console.log(dd)
    let ee = await e()
    console.log(ee)
}


oupt()