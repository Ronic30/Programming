// js code for changing the shape of Item square box in rectangle and circle.

// 1. giving the style properties and text to box: 
document.querySelector(".box").setAttribute("style","width:50px; height:50px; border:2px solid black;")
document.querySelector(".box").innerText = "Item"

let item = document.querySelector(".box")

// 2. giving the style properties to the button for changes after clicking the it:
let rec = document.getElementById("rct")
rec.addEventListener("click",()=>{
    item.setAttribute("style","width:100px; height:50px; border:2px solid black;")
})

// 3. creating new button --> giving class --> giving text --> appending it into the container
let a = document.createElement("Button")
a.setAttribute("class","crl")
a.innerHTML = "Circle"
document.querySelector(".container").append(a)

// 4. giving the style properties to the button for changes after clicking the it:
let cirlce = document.querySelector(".crl")
cirlce.addEventListener("click", ()=>{
    item.setAttribute("style", "width:50px; height:50px; border:2px solid black; border-radius : 25px;")
})
