//function eg 2 sum
#include<stdio.h>
int sum(int a, int b);
int main()
{
    int a,b;
    printf("enter a,b\n");
    scanf("%d%d",&a,&b);
    int s = sum(a,b);
    printf("sum is %d",s);
    return 0;
}
int sum(int x, int y)
{
    return x+y;
}