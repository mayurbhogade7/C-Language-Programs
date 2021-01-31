#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",& a);

    if(a % 2 == 0)
    {
        printf("%d is a Even number.", a);
    }
    else
    {
        printf("%d is a Odd number.", a);
    }
    return 0;
}