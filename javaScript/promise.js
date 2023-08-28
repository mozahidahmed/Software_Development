/* 
In JavaScript, a promise is a good way to handle asynchronous operations. 
It is used to find out if the asynchronous operation is successfully completed or not.
 */


/*
 A promise may have one of three states.
01.Pending
02.Fulfilled
03.Rejected

*/


let message =true;
let promise =new Promise ((resolve,reject)=>{
    if (message){
        resolve([
            {
                username:"mozahid",pas:"75987495734"
            }
        ])
    }else{
        reject("user is not vaild")
    }
})
promise.then((success)=>{
    console.log(success);

})
promise.catch((error)=>{
    console.log(error);

})






