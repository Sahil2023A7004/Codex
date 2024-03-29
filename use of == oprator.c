#include<stdio.h>
int main()
{
    //check if number is dividsible by 2
    //use of == oprator
    int a;
    printf("enter number\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("number is divisible by 2\n");
    }
    else {
        printf("Number is not divisible by 2\n");
    }
    return 0;
}