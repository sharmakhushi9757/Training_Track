/*
10.Write a program to rotate an array to the left by a given number of positions.
*/
#include <stdio.h>

int main() {
    int arr[5], size=5, rotate;
    
    printf("Enter Array Elements: ");
    for(int i=0;i<size;i+=1)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter rotation: ");
    scanf("%d", &rotate);
    
    int temp[size];
    
    for(int i=0;i<(size-rotate);i+=1)
    {
        temp[i] = arr[rotate+i];
    }
    
    int id = (size-rotate);
    for(int i=0;i<rotate;i+=1)
    {
        temp[i+id] = arr[i];
    }
    
    for(int i=0;i<size;i+=1)
    {
        printf("%d ",temp[i]);
    }
    
    return 0;
}
