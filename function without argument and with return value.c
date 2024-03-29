//function without argument and with return value
#include<stdio.h>
int sum();
void main(){
    int result;
    printf("sum of two numbers\n");
    result = sum();
    printf("%d",result);
}
int sum()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    return a+b;//return value
}
