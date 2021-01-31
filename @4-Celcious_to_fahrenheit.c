#include <stdio.h>

int main()
{
    float c, f;
    printf("Please enter temperature in celcious ");
    scanf("%f", &c);
    
    f = (c * 9 / 5) + 32;
    printf("The value of this celcious temperature in Fahrenheit is %f", f);
    return 0;
}