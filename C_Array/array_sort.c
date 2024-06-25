/*
6. Write a program to sort an array of integers in ascending order.
*/

#include<stdio.h>

int main()
{
    int arr[5];
    int size=5;
    
    printf("Enter array element here: ");
    for(int i=0 ; i<size ; i+=1)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nArray before Sorting: ");
    for(int i=0 ; i<size ; i+=1)
    {
        printf("%d ", arr[i]);
    }
    
    for(int i=0;i<size-1;i+=1)
    {
        for(int j=0;j<size-1;j+=1)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("\nArray after Sorting: ");
    for(int i=0 ; i<size ; i+=1)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
