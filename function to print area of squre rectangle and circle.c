//function to print area of squre rectangle and circle
#include<stdio.h>
float sq(float side);
float circle(float radius);
float rect(float a, float b);
int main()
{
    float a = 5.0;
    float b = 10.0;
    printf("%f is area",rect(a,b));
    return 0;
}
float sq(float side)
{
    return side*side;
}
float circle(float radius)
{
return 3.14*radius;
}
float rect(float a, float b)
{
return a*b;
}