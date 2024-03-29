#include<stdio.h>
int main()
//Print the sum of first n natural numbers and the numbers in reverse order
{
    int n;
    int sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int i=1;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    
    printf("sum is %d\n",sum);
    for(int i=n;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}
/*This can be done in one for loop only
for(i=1, j=n; i<=n && j>=1; i++,j--){printf("%d\n",j);} 
explaing : This is another approch for thr program
#include<stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1, j=n; i<=n && j>=1; i++,j--)
    {
        sum = sum + i;
        printf("%d\n",j);
    }
    printf("%d\n",sum);
    return 0;
} Now in this and previous program loop is calculatig from 1 to n and printing
OR 
#include<stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    int sum=0;
    for(int j=n; j>=1; j--)
    {
        sum = sum + j;
        printf("%d\n",j);
    }
    printf("%d\n",sum);
    return 0;
}  
In this loop is running n to 1 as we are printing numbers in revrece order
and we are calculating their sum so if we add from 0 to n or n to 0
it is same*/