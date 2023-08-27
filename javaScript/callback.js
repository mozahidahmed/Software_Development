//callback function can reasive another function by parameter 

function first(name1, second) {
    console.log(name1)
    second()
}
function second() {
    console.log("secount")

}

var result = first("mozahid", second)
