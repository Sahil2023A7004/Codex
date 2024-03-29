//using functions
#include<stdio.h>
void sum()//Function decleared
{
    int a,b;//function defined
    printf("enter a,b");
    scanf("%d%d",&a,&b);
   int sum = a+b;
    printf("sum is %d",sum);
}
void main()
{
    sum();/*function call*/
    sum();/*function call*/
    sum();/*function call*/
    printf("sahil: ");
    printf("codex: ");
    sum();//function call
}