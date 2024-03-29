//if else
#include<stdio.h>
int main()
{
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    if(age>>18)
    {
        printf("Adult\n");
    }
    else if(age==18)
    {
        printf("Entering Adulthood\n");
    }
    else
    {
        printf("Minor\n");
    }
    return 0;
}