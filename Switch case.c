#include<stdio.h>
int main()
//switch case
{
    int day;
    printf("enter day of week");
    scanf("%d",&day);
    switch (day) {
        case 1 :printf("Monday");
        break;
        case 2 :printf("Tuesday");
        break;
        case 3 :printf("Wednsday");
        break;
        case 4 :printf("Thursday");
        break;
        case 5 :printf("Friday");
        break;
        case 6 :printf("Saturday");
        break;
        case 7: printf("Sunday");
        default :printf("Not a vaild day");
    }
    return 0;
}
