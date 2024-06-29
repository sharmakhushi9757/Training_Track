/*
2. Write a C program to remove from last occurrence of a word in given string
 
	Example
Input
Input string: I am a programmer. I learn at Codeforwin.
 
Input word to remove: I
 
Output
String after removing last occurrence of 'I':
 
I am a programmer.  learn at Codeforwin
*/
#include<stdio.h>
#include<string.h>
int check_word(char *s, int start, int end, char *r)
{
    int flag = 1;
    int i=start, j=0;
    while(i<=end)
    {
        if(s[i]!=r[j])
        {
            flag=0;
            break;
        }
        i+=1;
        j+=1;
    }
    
    return flag;
}

int main() 
{
    char s[] = "i love problem solving. i code on leetcode and codeforces.";
    char rm_word[] = "i";
    printf("%s\n", s);
    
    int size = strlen(s);
    
    int start_r = 0, end_r = size;
    int start_w = 0, end_w = size;
    for(int i=0;i<size;i+=1)
    {
        if(s[i] == ' ')
        {
            end_w = i-1;
            if(check_word(s, start_w, end_w, rm_word))
            {
                start_r = start_w;
                end_r = end_w;
            }
            start_w = i+1;
        }
    }
    //printf("%d %d", start_r, end_r);
    for(int i=0;i<size;i+=1)
    {
        if(i<start_r | i>end_r)
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}








