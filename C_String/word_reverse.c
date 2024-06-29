/*
Write a program to reverse the order of words in a given string.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse_string(char *s, int start, int end)
{
    while(start<end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start+=1;
        end-=1;
    }
}
int main()
{
    char s[] = "kanak is a Core to Advance Problem Solver";
    int size = strlen(s);
    int start = 0, end = 0;
    printf("%s\n", s);
    
    reverse_string(s, start, size-1);
    
    for(int i=0;i<size;i+=1)
    {
        if(s[i] == ' ')
        {
            end = i;
            reverse_string(s, start, end-1);
            start = i+1;
        }
    }
    
    printf("\n");
    printf("%s\n", s);
    
    return 0;
}


