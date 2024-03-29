//factorial
#include<stdio.h>
int main()
{
  int a,n,fact=1;
  printf("enter a\n");
  scanf("%d",&a);
  for(int i=1;i<=a;i++)//i<=a means loop will run upto value user needs factorial of
  {
    fact=fact*i;//this line of code will enable us to multiply the value of fact whic is 1 and countinue to do up loop ends
  }
  printf("%d is factorial\n",fact);
  return 0;
}
