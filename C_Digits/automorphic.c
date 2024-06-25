/*
3. C program to check if a number is an automorphic number (a number whose square ends in the same digits as the number itself).
Example:
Consider the number 76.
1. Calculate the square of the number:
      76*76=5776
2. Determine the number of digits in the original number:
	Number of digits in 76 is 2.
3. Therefore extract the last 2 digits from the square: (mod of 10 to the power 2)
       5776 mod 100 = 76
4. Compare the extracted digits with the original number:
	Extracted digits: 76
	Original number: 76
Since the extracted digits (76) match the original number (76), 76 is an automorphic number.
*/

#include<stdio.h>
#include<math.h>
int pow_function(int x, int n)
{
    int ans = 1;
    for(int i=0;i<n;i+=1)
    {
        ans *= x;
    }
    return ans;
}
int main()
{
   int n ;
   printf("Enter number(n): ");
   scanf("%d", &n);
   int n_dup = n;
   
   int sq = n*n;
   int ct = 0;
   while(n_dup)
   {
       ct+=1;
       n_dup = n_dup/10;
   }
   
   int base = pow_function(10,ct);
   if((sq%base)==n)
   {
       printf("%d is automorphic!", n);
   }
   else
   {
       printf("%d No number is not automorphic", n);
   }
   
    return 0;
}
