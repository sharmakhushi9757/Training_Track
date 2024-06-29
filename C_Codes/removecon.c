#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check_consequtive(char s[])
{
    int n = strlen(s);
    
    for(int i=0;i<n-1;i+=1)
    {
        if(abs(s[i]-s[i+1])==1)
        {
            return i;
        }
        
    }
    return -1;
}
void remove_consequtive(char s[], int index)
{
    char s_new[100];
    int k=0;
    
    int n = strlen(s);
    for(int i=0;i<index;i+=1)
    {
        s_new[k++] = s[i]; 
    }
    for(int i=index+2;i<n;i+=1)
    {
        s_new[k++] = s[i];
    }
    s_new[k++] = '\0';
    strcpy(s,s_new);
}
void main()
{
    char s[100];
    
    printf("Enter String: ");
    scanf("%[^\n]s", s);
    
    while(1)
    {
        int index = check_consequtive(s);
        if(index==-1)
        {
            break;
        }
        else
        {
            remove_consequtive(s, index);
        }
    }
    printf("%s\n", s);
}
