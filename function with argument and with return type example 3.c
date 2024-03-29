//function with argument and with return type example 3
#include<stdio.h>
int sum(int a, int b);
void main()
{
    int a,b,c;
    printf("Sum of two numbers\n");
    printf("enter a,b\n");
    scanf("%d%d",&a,&b);
    c = sum(a,b);
    printf("sum is %d\n",c);
}
int sum(int x , int y)//the values used in this(x,y)here only they can be used in return
{
    return x+y;//x and y used because we called function and passed arguments in x and y
}
