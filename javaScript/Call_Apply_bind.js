//bahir teke bole dite parben a 3ta method bebohar kre 



function myFunc(c) {
    console.log(this)
    console.log(this.a + this.b + c);
}


myFunc.call({ a: 60, b: 40 }, 56) //sent data without object
myFunc.apply({ a: 60, b: 40 }, [56]) //can not data without object 


var result=myFunc.apply({ a: 60, b: 40 }, ) //can not data without object 
result()