/*
about addresses
will give you its address in the memory.
*/

#include <stdio.h>
int main()
{
    int var = 5;
    printf("var: %d\n", var);

    // Notice the use of & before var
    printf("address of var: %p", &var);
    return 0;
}


//assign value

#include <stdio.h>
int main()
{

    int *pc, c;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d\n", c); // Output: 1
    printf("%d", *pc); // Ouptut: 1

    return 0;
}