//function example
#include<stdio.h>
void sum()//decleared function
{
    int a,b,sum;//taking user input 
    printf("enter a,b\n");
    scanf("%d%d",&a,&b);
    sum = a + b;
    printf("sum is %d\n",sum);
}
void main()
{
    sum();//function calling
    sum();
    printf("sahil\n");
}