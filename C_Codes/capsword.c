#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[100];
    
    printf("Enter sentence here: ");
    fgets(s, 100, stdin);
    
    int size = strlen(s);
    
    printf("%s\n", s);
    
    int start=0, end = size;
    for(int i=0;i<size;i+=1)
    {
        if(s[i] == ' ' | (i==size-1))
        {
            s[start] = toupper(s[start]);
            start = i+1;
        }
    }
     printf("\n%s\n", s);
    
}
