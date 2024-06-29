/*
1. You are given a string, str.
 
You need to find the score of str as per the following rules:
 
1) For each palindrome of length 4 in str, add 5 to the score
 
2) For each palindrome of length 5 in str, add 10 to the score
It is given that palindromes can overlap within str. However, the characters of the palindrome must be continuous and must NOT be circular (i.e. they must NOT wrap around the end of the string.
Output the final value of score.
Notes:
 
• A palindrome is a word, phrase, or sequence that reads the same backwards as forwards. Examples of palindromes are words like "madam", "racecar", "abCba" and "aBccBa", and "ABBA"
 
• Palindromes are case-sensitive in this problem (e.g. "Madam" and "ABCcba" are NOT palindromes)
 
• The score is initially 0
 
• There are no whitespaces in str.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int check_palindrome(char *s, int start, int end)
{
    int flag = 1;
    while(start<end)
    {
        if(s[start]!=s[end])
        {
            flag = 0;
            break;
        }
        start+=1;
        end-=1;
    }
    return flag;
}

int main()
{
    char s[] = "kanaknamanmaam";
    int score = 0, size = strlen(s);
    int start=0, end=size;
    
    for(int i=0;i<size-3;i+=1)
    {
        start = i;
        end = i+3;
        if(check_palindrome(s, start, end))
        {
            score+=5;
        }
        if((start+4 < size) & check_palindrome(s, start, end+1))
        {
            score+=10;
        }
        
    }
    
    printf("Total Score: %d\n", score);
    return 0;
}















