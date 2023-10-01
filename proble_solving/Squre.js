
var num = prompt("Write your num:")
var outputResult = Math.sqrt(num);




if (Number.isInteger(outputResult)) {
    console.log("This result is", outputResult)
}
if (!Number.isInteger(outputResult)) {
    console.log("This nmber is decimal", outputResult)
}