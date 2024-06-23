/*
6. program to find largest of three numbers

*/

#include<stdio.h>

int main()
{
   int num1, num2, num3;
   
   printf("Enter numbers: ");
   scanf("%d%d%d", &num1, &num2, &num3);
   
   if(num1>num2 & num1>num3)
   {
       printf("%d is Greater of all.", num1);
   }
   else if(num2>num1 & num2>num3)
   {
       printf("%d is Greater of all.", num2);
   }
   else if(num3>num1 & num3>num2)
   {
       printf("%d is Greater of all.", num3);
   }
    return 0;
}
