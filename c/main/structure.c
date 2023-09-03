/* In C programming, a struct (or structure) is a collection of variables 
(can be of different types) under a single name.*/

#include <stdio.h>

//01. 
structure function
struct Person{
    int age;
    float salary;
};

int main() {
    //02 . call variable
    struct Person p1;
    struct Person p2;
    // assign value
    p1.age = 1;
    p2.age = 2;
    //print
    printf("Age of person%d \n",p1.age);
    printf("Age of person%d ",p2.age);
    return 0;
}

//02 .one line
struct Person p1 = {.age = 1};
struct Person p2 = {.age = 2};


//03 person variable set as well function
#include <stdio.h>

// structure function
struct Person
{
    int age;
    float salary;
} p1, p2;

int main()
{
    p1.age = 1;

    printf("Age of person:%d \n", p1.age);

    return 0;
