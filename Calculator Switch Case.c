#include<stdio.h>
int main()
{
    char oprator;
    printf("Slect oprator['+','-','*','/']");
    scanf("%c",&oprator);
    double number1;
    printf("enter number1\n");
    scanf("%f",&number1);
   double number2;
    printf("enter number2\n");
    scanf("%f",&number2);
    switch (oprator) {
        case '+' :printf("%lf",number1+number2);
        break;
        case '-' :printf("%lf",number1-number2);
        break;
        case '*' :printf("%lf",number1*number2);
        break;
        case '/' :printf("%lf",number1/number2);
        break;
        default :printf("Array Mere ko kya maloom");
    }
return 0;
}