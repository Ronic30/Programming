async function getData(){
    let x = await fetch('https://jsonplaceholder.typicode.com/posts', {
        method: 'POST',
        body: JSON.stringify({
            title: 'foo',
            body: 'bar',
            userId: 1,
        }),
        headers: {
            'Content-type': 'application/json; charset=UTF-8',
        },
    })

    let data = await x.json()
    return data
}

async function main(){
    console.log("Loading the Module")
    let val = await getData()
    console.log(val)
    console.log("Module is Loaded")
}

main()