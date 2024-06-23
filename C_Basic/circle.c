/*
2. To calculate Area and Circumference of a circle
*/

#include<stdio.h>
int main()
{
    float radius, pi = 3.14;
    
    printf("Enter radius of Circle: ");
    scanf("%f", &radius);
    
    float area = pi*radius*radius;
    float circumfrence = 2*pi*radius;
    printf("Area: %f\n", area);
    printf("Circumfrence: %f\n", circumfrence);
    return 0;
}
