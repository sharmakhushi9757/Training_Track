/*
4. Write a C program to determine whether a given positive integer is an Armstrong number. An Armstrong number (also known as a narcissistic number or pluperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. Your program should:
 
 
i. Prompt the user to enter a positive integer.
ii. Determine the number of digits in the number.
iii. Calculate the sum of each digit raised to the power of the total number of digits.
iv Compare the calculated sum to the original number to determine if it is an Armstrong number.
v. Print "Armstrong number" if the number is an Armstrong number, otherwise print "Not an Armstrong number".
*/

#include<stdio.h>
#include<math.h>
int pow_func(int x, int n)
{
    int total = 1;
    for(int i=0;i<n;i+=1)
    {
        total *= x;
    }
    return total;
}
int main()
{
    int n;
    printf("Enter integer (n): ");
    scanf("%d", &n);
    
    int n_dup = n, ln=0, n_check=n;
    while(n_dup)
    {
        ln+=1;
        n_dup = n_dup/10;
    }
    printf("Length of digits: %d\n", ln);
    
    int sm = 0;
    while(n_check)
    {
        sm += pow_func(n_check%10, ln);
        n_check = n_check/10;
    }
    
    if(sm == n)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an Armstrong number");
    }
    
    
    return 0;
}
