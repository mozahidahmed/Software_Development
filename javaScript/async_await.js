//this a conditional statement when you have done first works you can go to next works
/*
We use the async keyword with a function 
to represent that the function is an asynchronous function. 
The async function returns a promise.


*/

let promise1;
let promise2;
let promise3;

async function asyncFunc() {
    let result1 = await promise1;
    let result2 = await promise2;
    let result3 = await promise3;

    console.log(result1);
    console.log(result1);
    console.log(result1);
}