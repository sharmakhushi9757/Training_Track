/*
14. Write a program to find the transpose of a given 2D array (matrix).
*/
#include <stdio.h>

int main() {
    int a[3][3], t[3][3];
    int size = 3;
    
    for(int i=0;i<size;i+=1)
    {
        for(int j=0;j<size;j+=1)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    

    printf("A Matrix: \n");
    for(int i=0;i<size;i+=1)
    {
        for(int j=0;j<size;j+=1)
        {
             printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<size;i+=1)
    {
        for(int j=0;j<size;j+=1)
        {
            t[i][j] = a[j][i];
        }
    }
 
    printf("Resultant Matrix: \n");
    for(int i=0;i<size;i+=1)
    {
        for(int j=0;j<size;j+=1)
        {
             printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
