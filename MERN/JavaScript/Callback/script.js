// const fn = () => {
//     console.log("Nothing")
// }

// const callback = (arg, fn) => {
//     console.log(arg)
//     fn()
// }

// function loadScript(src, callback){
//     let sc = document.createElement("script")
//     sc.src = src
//     sc.onload = () => callback("Rohan", fn)
//     document.head.append(sc)
// }

// loadScript("https://cdnjs.cloudflare.com/ajax/libs/prism/9000.0.1/prism.min.js", callback)

function doSomeAsyncWork(x, y, callback){
    console.log(x)
    console.log(y)
    setTimeout(function(){
        callback(x, y)
    }, 2000)
}

doSomeAsyncWork(10, 2, function(x, y){
    console.log(x + y)})