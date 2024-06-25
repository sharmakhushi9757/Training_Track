/*
11. Write a program to find the second largest element in an array.
*/

#include<stdio.h>
#include<limits.h>
int main()
{
    int max1=INT_MIN, max2=INT_MIN, arr[5], size=5;
    
    printf("Enter Array elements: ");
    for(int i=0;i<size;i+=1)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0;i<size;i+=1)
    {
        if(max1<arr[i])
        {
            max2 = max1;
            max1 = arr[i];
        }
    }
    printf("Secound Highest Element: %d", max2);
    return 0;
}
