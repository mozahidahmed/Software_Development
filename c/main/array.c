
//01. single array
int mark[] = {19, 10, 8, 17, 9};



//02.array loop
int mark[] = {19, 10, 8, 17, 9};
for (int i = 0; i < 5; i++)
{
    printf("%d \n", mark[i]);


//03.input from user
    int s[2];
    printf("Write array of number:");
    scanf("%d", &s[0]);
    scanf("%d", &s[1]);

    printf("%d", s[1]);

//04. Multidimensional array
    int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};

    printf("%d", c[0][1]);


//05. argument pass with array value in function
    void display(int a1, int a2)
    {
        printf("%d\n", a1);
        printf("%d", a2);
    }

    int main()
    {
        int result[] = {11, 21, 31, 41, 51, 61};
        int result2[] = {151, 251, 351, 451, 551, 651};

        display(result[1], result2[1]);

        return 0;
        }
