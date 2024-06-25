/*
12. Write a program to check if an array is a palindrome.
*/

#include<stdio.h>
int main()
{
    int arr[5], size=5, flag=1;
    
    printf("Enter Array elements: ");
    for(int i=0;i<size;i+=1)
    {
        scanf("%d", &arr[i]);
    }
    
    int i=0, j=size-1;
    while(i<=j)
    {
        if(arr[i]!=arr[j])
        {
            flag = 0;
            break;
        }
        i+=1;
        j-=1;
    }
    
    if(flag==0)
    {
        printf("Array is not Palindrome!");
    }
    else
    {
        printf("Array is Palindrome!!");
    }
    
    return 0;
}
