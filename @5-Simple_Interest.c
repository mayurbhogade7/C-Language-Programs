#include <stdio.h>

int main()
{
    int p, t;
    float r, si;
    printf("Enter the principle is rupees ");
    scanf("%d", &p);

    printf("Enter the time duration in year ");
    scanf("%d", &t);

    printf("Enter the rate of interest in percentage ");
    scanf("%f", &r);

    r = r / 100;
    si = p * r * t;

    printf("Simple Interest is Rs.%f ", si);
    return 0;
}