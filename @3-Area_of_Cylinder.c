#include <stdio.h>

int main()
{
    float r, a, h, pi = 3.14;
    printf("Enter radius of cylinder ");
    scanf("%f", &r);

    printf("Enter height of cylinder ");
    scanf("%f", &h);

    a = pi * r * r * h;
    printf("Area of Cylinder %f", a);
    return 0;
}