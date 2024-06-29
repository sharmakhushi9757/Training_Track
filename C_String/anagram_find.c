/*
Write a program to check if two strings are anagrams of each other.*/
#include <stdio.h>
#include<string.h>
void sort(char *s, int size)
{
   for(int i=0;i<size-1;i+=1)
   {
       for(int j=i+1;j<size;j+=1)
       {
           if(s[i]>s[j])
           {
               char temp = s[i];
               s[i] = s[j];
               s[j] = temp;
           }
       }
   }
   //printf("%s", s);
}
int main() {
    char s1[10] = "listen", s2[10] = "silent";
    int size = strlen(s1);
    
    sort(s1, size);
    sort(s2, size);
    
    int flag=0;
    int i=0, j=0;
    while(i<size)
    {
        if(s1[i]!=s2[j])
        {
            flag = 1;
            break;
        }
        i+=1;
        j+=1;
    }
    if(flag==1)
    {
        printf("No Anagram!");
    }
    else
    {
        printf("Yes Anagram!");
    }
    return 0;
}
