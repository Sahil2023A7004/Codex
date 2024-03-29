//write a program to calculate sum of first n numbers and print them in reverse
#include<stdio.h>
int main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
  int sum = 0;
  for(int i=0; i<=n; i++)
  {
    sum = sum + i;
  } 
  printf("%d\n",sum);
  for(int i=n; i>=0; i--)
  {
    printf("%d\n",i);
  }
  return 0;
}