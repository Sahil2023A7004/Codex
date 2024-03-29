#include<stdio.h>
int main()
//Table of number n
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int i;
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
    return 0;
}