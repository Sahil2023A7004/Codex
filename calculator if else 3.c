#include<stdio.h>
int main()
{
    char oprator;
    printf("slect oprator['+','-','*','/']\n");
    scanf("%c",&oprator);
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    if(oprator == '+')
    {
        printf("%d is sum",a+b);
    }
     else if(oprator == '-')
    {
        printf("%d is diffrence",a-b);
    }
    else if(oprator == '*')
    {
        printf("%d is product",a*b);
    }
    else if(oprator == '/')
    {
        printf("%d is reminder",a/b);
    }
    else
    {
        printf("invaild choise\n");
    }
    return 0;
}