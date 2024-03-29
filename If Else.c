#include<stdio.h>
int main()
//using if else 
{
    int marks;
    printf("enter the marks of student\n");
    scanf("%d",&marks);
    if(marks>30)
    {
        printf("Student passed\n");
        }
        if(marks>100)
        {
            printf("Invailed input");
        }
    else{
printf("Student failed\n");
    }
    return 0;
}