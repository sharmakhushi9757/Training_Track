/*
13. Write a program to perform matrix multiplication on two 2D arrays.
*/
#include <stdio.h>

int main() {
    int a[3][3], b[3][3];
    int size = 3;
    
    for(int i=0;i<size;i+=1)
    {
        for(int j=0;j<size;j+=1)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<size;i+=1)
    {
        for(int j=0;j<size;j+=1)
        {
            scanf("%d", &b[i][j]);
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
    
    printf("B Matrix: \n");
    for(int i=0;i<size;i+=1)
    {
        for(int j=0;j<size;j+=1)
        {
             printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    int res[size][size], sum=0;
    for(int i=0;i<size;i+=1)
    {
        for(int j=0;j<size;j+=1)
        {
            for(int k =0;k<size;k+=1)
            {
                sum += a[i][k] * b[k][j];
            }
            
            res[i][j] = sum;
            sum = 0;
             
        }
    }
    
    printf("Resultant Matrix: \n");
    for(int i=0;i<size;i+=1)
    {
        for(int j=0;j<size;j+=1)
        {
             printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
