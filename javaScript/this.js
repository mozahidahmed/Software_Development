/*
this keyword refers to the object where it is called.
*/ 

const person = {
    firstName: "John",
    lastName: "Doe",
    id: 5566,
    fullName: function () {
        return this.firstName + " " + this.lastName;

    }
};
var result = (person.fullName())
console.log(result)