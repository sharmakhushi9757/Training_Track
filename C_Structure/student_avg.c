#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student_score
{
    char student_ID[10];
    int score[2];
}student;
int check_student(student s[], char *token, int n)
{
    for(int i=0;i<n;i+=1)
    {
        if(strcmp(s[i].student_ID, token) == 0)
        {
            return i;
        }
    }
    return -1;
}

void main()
{
    student s[10];
    
    int n, p_count=0, index=-1;
    printf("Enter number of inputs: ");
    scanf("%d", &n);
    
    
    for(int i=0;i<n;i+=1)
    {
        char input[50];
        printf("Enter input: Student_id-score: ");
        scanf("%s", input);
        
        char *token = strtok(input, "-");
        int count=0;
        while(token!=NULL)
        {
            if(count==0)
            {
                index = check_student(s, token, p_count);
                if(index==-1)
                {
                    strcpy(s[p_count].student_ID, token);
                }
            }
            else if(count==1)
            {
                int scr = atoi(token);
                
                if(index==-1)
                {
                    s[p_count].score[0] = scr;
                    s[p_count].score[1] = 1;
                    p_count+=1;
                }
                else if(index>-1)
                {
                    s[index].score[0] += scr;
                    s[index].score[1] += 1;
                }
            }
            count+=1;
            token = strtok(NULL, "-");
        }
        
    }
    
    for(int i=0;i<p_count;i+=1)
    {
        printf("%s-", s[i].student_ID);
        printf("%f\n", (s[i].score[0]*1.0/s[i].score[1]));
    }
    
}
