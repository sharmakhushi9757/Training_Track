/*
7. Write a program that takes a score (0-100) as input from the user and uses if statements to determine the corresponding grade:
90-100: A

80-89: B

70-79: C

60-69: D

Below 60: F

Print the grade.

*/

#include<stdio.h>

int main()
{
   int score;
   
   printf("Enter Score:");
   scanf("%d", &score);
   
   if(score>=90 & score<=100)
   {
       printf("Grade-A");
   }
   else if(score>=80 & score<=89)
   {
       printf("Grade-B");
   }
   else if(score>=70 & score<=79)
   {
       printf("Grade-C");
   }
   else if(score>=60 & score<=69)
   {
       printf("Grade-D");
   }
   else if(score<60)
   {
       printf("Grade-F");
   }
   
    return 0;
}
