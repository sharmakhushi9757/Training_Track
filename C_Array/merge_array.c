/*
7.Write a program to merge two arrays into a single array.
*/
#include<stdio.h>

int main()
{
    int arr1[3],arr2[3], merge[6];
    int size=3;
    
    printf("Enter array1 element here: ");
    for(int i=0 ; i<size ; i+=1)
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter array2 element here: ");
    for(int i=0 ; i<size ; i+=1)
    {
        scanf("%d", &arr2[i]);
    }
    
    for(int i=0;i<size;i+=1)
    {
        merge[i] = arr1[i];
    }

    for(int i=0;i<size;i+=1)
    {
        merge[i+size] = arr2[i];
    }
    
    printf("Array after Mergeing: \n");
    for(int i=0;i<(size+size);i+=1)
    {
        printf("%d ", merge[i]);
    }
    
    return 0;
}
