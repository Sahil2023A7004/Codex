/*write a fn that prints namaste if user is indian
and bonjour if user if french */
#include<stdio.h>
void namaste();//create function
void bonjour();//create function
int main()
{
   printf("enter f for french anf i for indian\n");
   char ch;
   scanf("%c",&ch);//write your user choices and conditions
   if(ch == 'i')
   {
    namaste();
   }
   else if(ch == 'f')
   {
    bonjour();
   }
   else
   {
    printf("invaild\n");
   }
    return 0;
}
void namaste() {//call function
    printf("namaste\n");
}
void bonjour() {//call function
    printf("bonjour\n");
} 