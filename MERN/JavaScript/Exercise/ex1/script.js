let countstr = 0

function countDown(){
    countstr++
    console.log(countstr)
}

setInterval(countDown, 1000)
