#include<stdio.h>
#include<string.h>
#include <ctype.h>
int unique_word(char word_arr[100][50], char *token, int count)
{
    for(int i=0;i<count;i+=1)
    {
        if(strcmp(word_arr[i], token)==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s[100];
    printf("Enter Sentence: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0;
    
    int count=0;
    char word_arr[100][50];
    
    char *token = strtok(s, " ");
    while(token)
    {
        if(unique_word(word_arr, token, count))
        {
            strcpy(word_arr[count], token);
            count+=1;
        }
        token = strtok(NULL, " ");
    }
    
    for(int i=0;i<count-1;i+=1)
    {
        for(int j=0;j<count-i-1;j+=1)
        {
            if(strcmp(word_arr[j], word_arr[j+1])>0)
            {
                char temp[50];
                strcpy(temp, word_arr[j]);
                strcpy(word_arr[j], word_arr[j+1]);
                strcpy(word_arr[j+1], temp);
            }
        }
    }
    
    for(int i=0;i<count;i+=1)
    {
        printf("%s ", word_arr[i]);
    }
    return 0;
}







