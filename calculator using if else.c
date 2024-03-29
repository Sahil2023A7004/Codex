//Calculator using if else
#include<stdio.h>
char main()
{
   char oprator;
   printf("slect your oprator\n");
   printf("'+','-','*','/'");
   scanf("%c",&oprator);
   double num1,num2;
   printf("num1\n");
   scanf("%lf",&num1);
   printf("num2\n");
   scanf("%lf",&num2);
if(oprator=='+')
{
    printf("%lf\n",num1+num2);
}
else if(oprator=='-')
{
    printf("%lf\n",num1-num2);
}
else if(oprator=='*')
{
    printf("%lf\n",num1*num2);
}
else if(oprator=='/')
{
    printf("%lf\n",num1/num2);
}
else
{
    printf("invaild choice\n");
}
return 0;
}