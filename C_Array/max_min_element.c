/*
2. Write a program to find the maximum and minimum elements in an array of integers.
*/
#include <stdio.h>
#include<limits.h>
int main() {
    int size = 10;
    int max_element = INT_MIN, min_element = INT_MAX;
    int arr[10];
    
    printf("Enter Array Element here: ");
    for(int i=0; i<size; i+=1)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<size; i+=1)
    {
        if(max_element<arr[i])
        {
            max_element = arr[i];
        }
        if(min_element>arr[i])
        {
            min_element = arr[i];
        }
    }
    printf("Max element: %d\n", max_element);
    printf("Min element: %d\n", min_element);
    
    return 0;
}
