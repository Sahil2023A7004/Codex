#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter a,b\n");
    scanf("%d%d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("%d\n%d",a,b);
    return 0;
}