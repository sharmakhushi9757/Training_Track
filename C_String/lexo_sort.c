/*
Write a program to sort an array of strings in lexicographic (dictionary) order.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(char *arr, int size)
{
    for(int i=0;i<size;i+=1)
    {
        for(int j=i+1;j<size;j+=1)
        {
            if(arr[i]>arr[j])
            {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    char s[10] = "kanak";
    int size = strlen(s);
    printf("Before Sort: %s\n", s);
    sort(s, size);
    printf("After Sort: %s\n", s);
    return 0;
}

