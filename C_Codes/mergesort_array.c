#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of n:");
    scanf("%d", &n);
    
    int a1[n], a2[n];
    printf("Enter array1: ");
    for(int i=0;i<n;i+=1)
    {
        scanf("%d", &a1[i]);
    }
    
        
    printf("Enter array2: ");
    for(int i=0;i<n;i+=1)
    {
        scanf("%d", &a2[i]);
    }
    
    int size = n+n;
    int new_array[size];
    int i=0, j=0, k=0;
    while(i<n & j<n)
    {
        if(a1[i]>a2[j])
        {
            new_array[k] = a2[j];
            j+=1;
            k+=1;
        }
        else
        {
            new_array[k] = a1[i];
            i+=1;
            k+=1;
        }
    }
    while(i<n)
    {
        new_array[k] = a1[i];
        k+=1;
        i+=1;
    }
    while(j<n)
    {
        new_array[k] = a2[j];
        k+=1;
        j+=1;
    }
    
    for(int m=0;m<size;m+=1)
    {
        printf("%d ", new_array[m]);
    }
    
    return 0;
}
