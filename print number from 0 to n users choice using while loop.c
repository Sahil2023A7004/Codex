//print number from 0 to n users choice using while loop
#include<stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    int i=0;
    while(i<=n){printf("%d\n",i);i++;}
    return 0;
}