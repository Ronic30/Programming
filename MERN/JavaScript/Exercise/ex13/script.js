console.log("Hello!")

function createCard(title, cName, views, monthsOld, duration, thumbnail){
    document.querySelector(".duration").innerText = "31:22";
    document.querySelector(".title").innerText = "Introduction to Backend | Sigma Web Dev Video #2";
    document.querySelector(".cname").innerText = "Code with Harry";
    let view = 560000;
    if(view >= 1000){
        views = (view/1000) + "K";
    }
    else if(view >= 1000000){
        views = (view/1000000) + "M";
    }
    document.querySelector(".views").innerText = view;
    document.querySelector(".monthsOld").innerText = "7 Months"

    document.querySelector("container").setAttribute("style","backgroundcolor:black");

}


createCard("Introduction to Backend | Sigma Web Dev video #2", "CodeWithHarry", 560000, 7, "31:22", "https://i.ytimg.com/vi/tVzUXW6siu0/hqdefault.jpg?sqp=-oaymwEcCPYBEIoBSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLACwWOixJVrKLFindK92kYMgTcQbw")