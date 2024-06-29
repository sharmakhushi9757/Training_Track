/*
Count the ways in where consonant number in left_string>right_string
*/
#include <stdio.h>
#include<string.h>
int count_consonants(char *s, int start, int end)
{
    int count = 0;
    while(start<end)
    {
        if(s[start]!='a' & s[start]!='e' & s[start]!='i' & s[start]!='o' & s[start]!='u')
        {
            count+=1;
        }
        start+=1;
    }
    return count;
}

int main() {
    char s[100];
    printf("Enter String here: ");
    fgets(s, 100, stdin);
    
    printf("String: %s", s);
    
    int count = 0;
    int size = strlen(s);
    
    //Base:
    if(size <= 2)
    {
        printf("Count: %d", count);
    }
    
    //Normal:
    for(int i=1;i<size-2;i+=1)
    {
        int left_count = count_consonants(s, 0, i+1);
        int right_count = count_consonants(s, i+1, size-1);
        
        if(left_count>right_count)
        {
            count+=1;
        }
    }
    
    printf("Count: %d\n", count);
    return 0;
}
