/*
1. Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number. For example, if the user enters 2784, then the program reports 21. If the user enters 59, then the program reports 14. The program should work for any number having one to ten digits.
*/

#include<stdio.h>
int main()
{
    int n, sm_digits=0;
    
    printf("Enter Digit(n): ");
    scanf("%d", &n);
    
    while(n)
    {
        int rem = n%10;
        sm_digits += rem;
        n = n/10;
    }
    
    printf("\nSum of digits: %d\n", sm_digits);
    return 0;
}
