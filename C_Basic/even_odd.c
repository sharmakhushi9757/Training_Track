/*
5. program to find given number is Odd or Even

*/

#include<stdio.h>

int main()
{
   int num;
   
   printf("Enter number: ");
   scanf("%d", &num);
   
   if(num%2==0)
   {
       printf("Number %d is Even.", num);
   }
   else
   {
       printf("Number %d is Odd.", num);
   }
    return 0;
}
