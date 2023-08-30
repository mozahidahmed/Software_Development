// Online C compiler to run C program online
#include <stdio.h>
int main()
{

    int number;
    printf("Please Write your number:");
    scanf("%d", &number);
    printf("your number: %d \n", number);

    if (number > 0)
    {
        printf("positive");
    }
    else if (number < 0)
    {
        printf("nagative");
    }
    else
    {
        printf("write a valied number");
    }

    return 0;
}