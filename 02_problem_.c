// 2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

#include <stdio.h>
int main()
{
    int radius, height;
    float PI = 3.14159;

    printf("Enter the Radius of Circle : ");
    scanf("%d", &radius);

    float area = PI * radius * radius;
    printf("Area of Circle is : %.2f \n", area);

    printf("Enter the Height of Cylinder : ");
    scanf("%d", &height);

    float volume = PI * radius * radius * height;
    printf("Volume of Cylinder is : %.2f", volume);

    return 0;
}