/*
Write a program to remove duplicate characters from a string.
*/
#include <stdio.h>
#include<string.h>
int main() {
    char s[] = "hello kanak sharma";
    char new_s[30];
    int k=0;
    
    int i=0;
    while(s[i]!='\0')
    {
        char check_char = s[i];
        int flag=0;
        for(int j=0;new_s[j]!='\0';j+=1)
        {
            if(check_char == new_s[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            new_s[k] = check_char;
            k+=1;
        }
        i+=1;
    }
    printf("%s", new_s);
    return 0;
}
