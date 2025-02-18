console.log("Hello");

document.querySelector(".box")
document.querySelector(".container")

document.querySelector(".container").innerHTML
document.querySelector(".box").innerHTML

document.querySelector(".box").innerText
document.querySelector(".container").innerText

document.querySelector(".container").outerHTML
document.querySelector(".box").outerHTML

document.querySelector(".box").hidden
document.querySelector(".box").hidden = true

document.querySelector(".box").innerHTML = "No I'm not a Box"

document.querySelector(".box").hasAttribute("style")
document.querySelector(".box").getAttribute("style")
document.querySelector(".box").setAttribute("style","color:blue")

document.querySelector(".box").attributes
document.querySelector(".box").removeAttribute("style")

let div = document.createElement("div");
div.innerHTML = "No I'm not a box";
div.setAttribute("class","created");
document.querySelector(".container").append(div);

let cont = document.querySelector(".container");
cont.insertAdjacentHTML("afterend", "<b>Hello I'm new box</b>")

document.querySelector(".container").classList
document.querySelector(".container").classList.add("new_class")
document.querySelector(".container").classList.remove("new_class")