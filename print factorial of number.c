//print factorial of number
#include<stdio.h>
int main()
{
 int n;
    printf("enter n\n");
    scanf("%d",&n);
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;//to understand refer to yt 
    }
    printf("factorial is %d",fact);
    return 0;
}