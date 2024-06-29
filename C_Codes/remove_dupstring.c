#include<stdio.h>
#include<string.h>

int check_duplicate(char s[])
{
    int n = strlen(s);
    for(int i=0;i<n-1;i+=1)
    {
        if(s[i]==s[i+1])
        {
            return i;
        }
    }
    return -1;
}
char remove_duplicate(char s[], int index)
{
    int n = strlen(s);
    char new_s[100];
    int k=0;
    for(int i=0;i<index;i+=1)
    {
        new_s[k] = s[i];
        k+=1;
    }
    for(int i=index+2;i<n;i+=1)
    {
        new_s[k] = s[i];
        k+=1;
    }
    new_s[k] = '\0';
    strcpy(s,new_s);
    
}
void main()
{
    char s[100];
    
    printf("Enter String:");
    scanf("%s", &s);
    
    
    while(1)
    {
        int index = check_duplicate(s);
        if(index!=-1)
        {
            remove_duplicate(s, index);
        }
        else if(index==-1)
        {
            break;
        }
    }
    printf("\n%s\n", s);
}
