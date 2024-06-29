/*
Time-Matching:
*/
#include<stdio.h>
#include<string.h>
int main() 
{
    int n;
    printf("Enter input number: ");
    scanf("%d", &n);
    
    int i=1;
    while(i<=n)
    {
        char time1[9], time2[9];
        printf("Enter Time-1 with(-) :");
        scanf("%s", time1);
        
        printf("Enter Time-2 with(-) :");
        scanf("%s", time2);
        
        printf("%s ", time1);
        printf("%s\n", time2);
        
        int k=0, j=0;
        int flag=0;
        while(time1[k]!='\0' | time2[i] !='\0')
        {
            if(time1[k]>time2[j])
            {
                printf("Late!!");
                break;
            }
            else if(time1[k]<time2[j])
            {
                printf("Early!!");
                break;
            }
            else if(time1[k]==time2[j] & time1[k]!='-' & time1[k]!='-' & k==8 & j==8)
            {
                printf("Hurray Equal!!");
                break;
            }
            k+=1;
            j+=1;
        }
        i+=1;
    }
    
    return 0;
}








