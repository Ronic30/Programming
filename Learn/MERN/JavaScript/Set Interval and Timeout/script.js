function getRandomColor(){
    let val1 = Math.ceil(0 + Math.random() * 255);
    let val2 = Math.ceil(0 + Math.random() * 255);
    let val3 = Math.ceil(0 + Math.random() * 255);

    return `rgb(${val1}, ${val2}, ${val3})`
}

setInterval(() => {
    document.querySelector(".box").style.backgroundColor = getRandomColor();
},99)

setTimeout(() => {
    document.querySelector(".box2").style.backgroundColor = getRandomColor();
},999)