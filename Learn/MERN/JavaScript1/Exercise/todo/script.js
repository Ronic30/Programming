// Write an HTML page with embedded JavaScript to implement a basic To-Do List application with the following features:

// Two input fields to accept the title and description of a to-do item.

// An "Add todo" button that, when clicked:

// Creates a new to-do item.

// Displays the title and description of the to-do.

// Includes a "Mark as done" button for each to-do item.

// When the "Mark as done" button is clicked for a particular to-do item, the text of that button should change to "Done!" for that specific item.

// Use JavaScript DOM manipulation to dynamically create and update the to-do items. Assign a unique ID to each item using a global counter.

let globalId = 1;

function markAsDone(todoId){
    const parent = document.getElementById(todoId)
    parent.children[2].innerHTML = "Done!"
}

function create(title, desc, id){
    const task = document.createElement("div")

    const n_title = document.createElement("div")
    n_title.innerHTML = title

    const n_desc = document.createElement("div")
    n_desc.innerHTML = desc

    const n_status = document.createElement("button")
    n_status.innerHTML = "Mark as Done!"

    n_status.setAttribute("onclick", `markAsDone(${id})`)

    task.appendChild(n_title)
    task.appendChild(n_desc)
    task.appendChild(n_status)

    task.setAttribute("id", id)
    return task

}

function addTodo(){
    const title = document.getElementById("title").value
    const desc = document.getElementById("desc").value
    const parent = document.getElementById("todos")

    parent.appendChild(create(title, desc, globalId++))
}