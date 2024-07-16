// 1. Write a C program to calculate area of a rectangle:
// b. Using inputs supplied by the user.

#include <stdio.h>
int main()
{
    int length, breadth, area;

    printf("Enter Length : ");
    scanf("%d", &length);

    printf("Enter Breadth : ");
    scanf("%d", &breadth);

    area = length * breadth;

    printf("Area of Rectangle of length: %d, breadth: %d is : %d", length, breadth, area);

    return 0;
}