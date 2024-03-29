//print 1 to n using recursive call
#include<stdio.h>
void print(int n)
{
    if(n==0) return;//base case
    print(n-1);//call
    printf("%d\n",n);//kaam
}
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    print(n);//call
    return 0;
}