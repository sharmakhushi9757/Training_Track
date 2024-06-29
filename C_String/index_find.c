/*
Return Index of char, sub-string and if not found = -1
*/
#include<stdio.h>
#include<string.h>
int check_word(char *s, int start, int end, char *word)
{
    int flag=1;
    int i = start, j=0;
    while(i<=end)
    {
        if(s[i]!=word[j])
        {
            flag = 0;
        }
        i+=1;
        j+=1;
    }
    return flag;
}
int main() 
{
    char s[] = "I love Problem Solving.";
    char sb_s[] = "love";
    char ch = 'I';
    int index_sb = -1, index_ch = -1, start_s=0, end_s=strlen(s);
    
    for(int i=0;s[i]!='\0';i+=1)
    {
        if(ch == s[i])
        {
            index_ch = i;
        }
        
        if(s[i] == ' ')
        {
            end_s = i-1;
            if(check_word(s, start_s, end_s, sb_s))
            {
                index_sb = start_s;
            }
            start_s = i+1;
        }
    }
    printf("%d %d\n", index_ch, index_sb);
    return 0;
}








