// 4. Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.

#include <stdio.h>
int main()
{
    float P, R, T, SI;

    printf("Enter the Principal amount : ");
    scanf("%f", &P);

    printf("Enter the Rate of interest : ");
    scanf("%f", &R);

    printf("Enter the Time (in years) : ");
    scanf("%f", &T);

    SI = (P * R * T) / 100;

    printf("Simple Interest is %.2f", SI);
}