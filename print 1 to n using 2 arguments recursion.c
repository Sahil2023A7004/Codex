//print 1 to n using 2 arguments recursion
#include<stdio.h>
void print(int x, int n)
{
if(x>n) return;//base case
printf("%d\n",x);//kaam
print(x+1,n);//call
}
int main()
{
    int n;
    printf("ente n\n");
    scanf("%d",&n);
    print(1,n);
    return 0;
}