/*
3. write a  C program that performs temperature conversions between Celsius to Fahrenheit.

*/

#include<stdio.h>
int main()
{
    float temp_c;
    
    printf("Enter Temperature (Celcius): ");
    scanf("%f", &temp_c);
    
    float temp_f = (temp_c*(9/5))+32;
    printf("Temperature (Fahrenheit): %f", temp_f);
    return 0;
}
