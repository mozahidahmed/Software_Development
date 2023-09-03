// A function that calls itself is known as a recursive function. And, 
this technique is known as recursion.

// Online C compiler to run C program online
#include <stdio.h>

int sum(int n); // create a function

int main()
{

    int number, result; // variable

    // user input
    printf("Write your number: ");
    scanf("%d", &number);

    result = sum(number);
    printf("sum = %d", result);

    return 0;
}

int sum(int n)
{
    if (n != 0)
        // sum() function calls itself
        return n + sum(n - 1);
    else
        return n;
}