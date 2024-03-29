//pointer
#include<stdio.h>
int main()
{
    int age = 19;//normal varibale
    int *ptr = &age;//stored the value of varibale in pointer *ptr
    int _age = *ptr;//acessed the value of variable whose adress is given by pointer
    printf("%d",_age);//prints value
    return 0;
}