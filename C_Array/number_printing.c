/*
1.Write a program to initialize an array with the first 10 natural numbers and print the elements.
*/
#include <stdio.h>

int main() {
    int size = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for(int i=0; i<size; i+=1)
    {
        printf("Natural Number: %d\n", arr[i]);
    }
    return 0;
}
