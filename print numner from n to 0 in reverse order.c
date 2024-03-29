//print numner from n to 0 in reverse order
#include<stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    for(int i=10;i>=1;i--)// we can replace 10 with another variable m to take more user input
    {
        printf("%d\n",n*i);
    }
    return 0;
}