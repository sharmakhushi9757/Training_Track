#include<stdio.h>
#include<limits.h>

void no_duplicate(int *array, int size)
{
    int new_array[size];
    for(int i=0;i<size;i+=1)
    {
        new_array[i] = 0;
    }
    
    for(int i=0;i<size;i+=1)
    {
        for(int j=0;j<size;j+=1)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
    
    int prev = array[0];
    new_array[0] = prev;
    int ct=1;
    for(int i=1;i<size;i+=1)
    {
        if(prev==array[i])
        {
            continue;
        }
        else
        {
            prev = array[i];
            new_array[ct] = prev;
            ct+=1;
        }
        
    }
    array = new_array;
    // printf("\nNew Array:");
    // for(int i=0;i<ct;i+=1)
    // {
    //     printf("%d ", array[i]);
    // }
    // printf("\n");

}

int main()
{
    int size=5, arr[5];
    
    printf("Enter Array elements here: ");
    for(int i=0;i<size;i+=1)
    {
        scanf("%d", &arr[i]);
    }
    
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i=0;i<size;i+=1)
    {
        if(maxi<arr[i])
        {
            maxi = arr[i];
        }
        if(mini>arr[i])
        {
            mini=arr[i];
        }
    }
    
    int count_array[maxi+1];
    for(int i=0;i<maxi+1;i+=1)
    {
        int element = i;
        int ct = 0;
        for(int j=0;j<size;j+=1)
        {
            if(element==arr[j])
            {
                ct+=1;
            }
        }
        count_array[i] = ct;
    }
    
    no_duplicate(arr, size);
    
    for(int i=0;i<size;i+=1)
    {
        printf("%d Frequency = %d \n", arr[i], count_array[arr[i]]);
    }
    
    return 0;
}
