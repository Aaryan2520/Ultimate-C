// 3. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit", celsius, fahrenheit);

    return 0;
}