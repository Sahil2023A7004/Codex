#include<stdio.h>
int main()
//Upper and Lower case
{
    char c;
    printf("Enter your character");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        printf("Upper case\n");
    }
    else if(c>='a' && c<='z')
{
    printf("lower case\n");
    }
else
{
    printf("Invaild choice\n");
}
return 0;
}