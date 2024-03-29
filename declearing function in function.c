#include<stdio.h>
void japan()
{
    printf("japan\n");
}
void England()
{
    printf("england\n");
    japan();
}
void india()
{
    printf("India\n");
    England();
}
int main()
{
    printf("Earth\n");
    india();
}