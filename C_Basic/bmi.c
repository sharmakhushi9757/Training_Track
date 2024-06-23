/*
9. BMI Calculator:

Write a program that calculates the Body Mass Index (BMI) based on user input for weight (in kg) and height (in meters). Use if statements to classify the BMI into categories:
Below 18.5: Underweight

18.5 to 24.9: Normal weight

25 to 29.9: Overweight

30 and above: Obesity

*/

#include<stdio.h>

int main()
{
    float weight, height, BMI;
    
    printf("Enter weight(in kg): ");
    scanf("%f", &weight);
    
    printf("Enter height(in meter): ");
    scanf("%f", &height);
    
    BMI = (weight)/(height*height);
    
    if(BMI<18.5)
    {
        printf("Underweight");
    }
    else if(BMI>=18.5 & BMI<=24.9)
    {
        printf("Normal weight");
    }
    else if(BMI>=25 & BMI<=29.9)
    {
        printf("Overweight");
    }
    else if(BMI>=30)
    {
        printf("Obesity");
    }
    
   
    return 0;
}
