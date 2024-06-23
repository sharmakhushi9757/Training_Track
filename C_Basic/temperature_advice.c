/*
8. Temperature Advice:

Write a program that takes a temperature value as input and uses if statements to print advice based on the temperature:
Above 30: "It's hot outside, stay hydrated!"

Between 20 and 30: "The weather is nice and warm."

Between 10 and 19: "It's a bit chilly, wear a jacket."

Below 10: "It's cold outside, stay warm!"

*/

#include<stdio.h>

int main()
{
    int temp_value;
    
    printf("Enter Temperature: ");
    scanf("%d", &temp_value);
    
    if(temp_value>30)
    {
        printf("It's hot outside, stay hydrated!");
    }
    else if(temp_value>=20 & temp_value<=30)
    {
        printf("The weather is nice and warm.");
    }
    else if(temp_value>=10 & temp_value<=19)
    {
        printf("It's a bit chilly, wear a jacket.");
    }
    else if(temp_value<10)
    {
        printf("It's cold outside, stay warm!");
    }
   
    return 0;
}
