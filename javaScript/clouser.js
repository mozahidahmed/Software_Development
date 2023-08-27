//closer is a default be. of javascript 
//he can return a function from inner function


//01. main function
function add(a) {
    var a = 60;
   
   //another function
    function anotherFunction(b) {
        var b = 40
        console.log(a + b)
    }
    anotherFunction()


}

var result = add()