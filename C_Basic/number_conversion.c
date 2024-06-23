/*
4.  Write a program to convert Binary to decimal
*/
#include<stdio.h>

int main()
{
    long int binary_integer, integer_value;
    int base = 1;
    
    printf("Enter Binary Number:");
    scanf("%ld", &binary_integer);
    
    while(binary_integer)
    {
        int rem = binary_integer%10;
        integer_value += (rem*base);
        base *= 2;
        binary_integer /= 10;
    }
    
    printf("Integer Value: %ld\n", integer_value);
    return 0;
}
