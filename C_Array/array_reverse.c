/*
5. Write a program to search for a specific element in an array and print its index if found.
*/
#include <stdio.h>
#include<limits.h>
int main() {
    int size = 10;
    int arr[10];
    
    printf("Enter Array Element here: ");
    for(int i=0; i<size; i+=1)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nArray Before Reversing: ");
    for(int i=0; i<size; i+=1)
    {
        printf("%d ", arr[i]);
    }
    int i = 0, j = size-1;
    while(i<=j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i+=1;
        j-=1;
    }
    printf("\nArray After Reversing: ");
    for(int i=0; i<size; i+=1)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
