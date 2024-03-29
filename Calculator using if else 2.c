//Calculator using if else
#include<stdio.h>
int main(){
    double a,b;
    char op;
    printf("a,b: ");
    scanf("%lf%lf",&a,&b);
    printf("Enter the operation");
    printf("\nFor addition + ");
    printf("\nFor subtraction - ");
    printf("\nFor multiplication * ");
    printf("\nFor division / : ");
    scanf(" %c",&op);
    if(op == '+') {
        printf("%lf is sum of %lf and %lf",a,b,(a+b));
    }
    else if( op == '-')
    {
        printf("%lf is diffrence of %lf and %lf",a,b,a-b);
    }
    else if(op == '*')
    {
        printf("%lf is product of %lf and %lf",a,b,a*b);
    }
    else if(op == '/')
    {
        printf("%lf is division of %lf and %lf ",a,b,a/b);
    }
    else 
    {
        printf("invaild oprator\n");
    }

    return 0;
}