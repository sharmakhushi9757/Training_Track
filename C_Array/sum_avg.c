/*
3. Write a program to calculate the sum and average of elements in an array.
*/
#include <stdio.h>
#include<limits.h>
int main() {
    int size = 10;
    int sum_of_element = 0, count_of_element = 0;
    float average_of_elements = 0;
    int arr[10];
    
    printf("Enter Array Element here: ");
    for(int i=0; i<size; i+=1)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<size; i+=1)
    {
        sum_of_element += arr[i];
        count_of_element += 1;
    }
    printf("Sum of Element: %d\n", sum_of_element);
    printf("Average of Element: %f\n", ((sum_of_element*1.0)/count_of_element));
    
    return 0;
}
