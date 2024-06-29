/*
3. Write a C program to replace first occurrence of a character with another character in a string.
 
Example
Input
Input string: I love programming.
 
Input character to replace: .
 
Input character to replace with: !
Output
String after replacing '.' with '!': I love programming!
*/
#include<stdio.h>
#include<string.h>

int main() 
{
    char s[] = "I Love Problem Solving.";
    char replace_word = '.';
    char replace_with = '!';
    
    printf("Before Replace: %s\n", s);
    for(int i=0;s[i]!='\0';i+=1)
    {
        if(s[i] == replace_word)
        {
            s[i] = replace_with;
        }
    }
    
    printf("After Replace: %s\n", s);
    
    return 0;
}








