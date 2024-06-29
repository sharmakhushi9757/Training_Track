/*
Write a program to check if a given string is a palindrome or not.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[10];
    fgets(s, 10, stdin);
    
    int flag=0;
    int i=0, j=strlen(s)-2;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            flag=1;
            break;
        }
        i+=1;
        j-=1;
    }
    
    if(flag==1)
    {
        printf("String is Not Palindrome!");
    }
    else
    {
        printf("String is Palindrome!");
    }
    return 0;
}

