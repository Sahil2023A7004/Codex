#include<stdio.h>
int main()
//Grading Students
{
    int marks;
    printf("enter the marks of student");
    scanf("%d",&marks);
    if(marks>30 && marks<70)
    {
        printf("C\n");
    }
   else if(marks>70 && marks<90)
    {
        printf("B\n");
    }
   else if(marks>90 && marks<100)
    {
        printf("A+\n");
    }
    else if(marks>100)
    {
        printf("Invaild choice\n");
    }
    else{
        printf("failed\n");
    }
    return 0;
}