/*
1. Write a program to perform simple arithmetic operation on two integers.
*/

#include<stdio.h>
int main()
{
    int num1, num2;
    
    printf("Enter number1: ");
    scanf("%d", &num1);
    
    printf("Enter number2: ");
    scanf("%d", &num2);
    
    printf("Sum : %d\n", num1+num2);
    printf("Subtract: %d\n", num1-num2);
    printf("Multiply: %d\n", num1*num2);
    printf("Divide: %d\n", num1/num2);
    
    
    return 0;
}
