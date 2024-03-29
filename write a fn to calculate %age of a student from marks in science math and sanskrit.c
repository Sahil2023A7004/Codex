//write a fn to calculate %age of a student from marks in science math and sanskrit
#include<stdio.h>
int calP(int sc, int math, int sn);
int main()
{
    int sc = 98;
    int math = 100;
    int sn = 99;
    printf("percentage is %d\n",calP(sc,math,sn));
    return 0;
}
int calP(int sc, int math, int sn)
{
    return ((sc+ math+ sn)/3);
}