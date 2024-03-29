//function with argument and without return value
#include<stdio.h>
void sum(int, int);
void main()
{
    int a,b;
    printf("sum of two numbers\n");
    printf("enter a,b\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
}
void sum(int a, int b)
{
    printf("sum is %d\n",a+b);
}