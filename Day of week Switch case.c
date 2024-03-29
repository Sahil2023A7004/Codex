#include<stdio.h>
int main()
{
      int day;
      printf("enter the day of week 1-7\n");
      scanf("%d",&day);
      switch(day){
            day1 : printf("Monday\n");
            break;
            day2 :printf("Tuesday\n");
            break;
            day3:printf("Wednsday\n");
            break;
            day4:printf("Thursday\n");
            break;
            day5:printf("Friday\n");
            break;
            day6:printf("Saturday\n");
            break;
            day7:printf("Sunday\n");
            break;
            default:
            printf("Invaild choice\n");
      }
      return 0;
}