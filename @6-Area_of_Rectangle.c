#include <stdio.h>

int main()
{
    int length, breadth;
    printf("What is the length of the rectangle? ");
    scanf("%d", &length);

    printf("What is the breadth of the rectangle? ");
    scanf("%d", &breadth);

    int area = length * breadth;
    printf("The area of this rectangle is %d", area);
    return 0;
}