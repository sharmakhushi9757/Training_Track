/*
5. Write a program to search for a specific element in an array and print its index if found.
*/

#include<stdio.h>

int main()
{
    int arr[5];
    int size=5, target, res=-1;
    
    printf("Enter array element here: ");
    for(int i=0 ; i<size ; i+=1)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter target to be search: ");
    scanf("%d", &target);
    
    for(int j=0; j<size ; j+=1)
    {
        if(arr[j]==target)
        {
            res = j;
        }
    }
    if(res!=-1)
    {printf("Element %d found at %d\n", target, res);}
    else
    {printf("Element Not found!!");}
    
    
    
    return 0;
}

