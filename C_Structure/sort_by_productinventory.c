/*
 * Define a structure to hold product inventory information, including the product ID and quantity. Write a program that accepts multiple product records (product_ID and quantity) and prints the total quantity for each product in decreasing order of total quantity. In case there are multiple records for the same product, the program should sum up the quantities.
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct product_sales{
    char product_ID[10];
    int quantity;
}product;

int check_product(product a[], char *token, int p_count)
{
    for(int i=0;i<p_count;i+=1)
    {
        if(strcmp(a[i].product_ID, token)==0)
        {
            return i;
        }
    }
    return -1;
}
void sort_product(product a[], int p_count)
{
    for(int i=0;i<p_count-1;i+=1)
    {
        for(int j=0;j<p_count-i-1;j+=1)
        {
            if(a[j].quantity>a[j+1].quantity)
            {
                int temp_amt = a[j].quantity;
                a[j].quantity = a[j+1].quantity;
                a[j+1].quantity = temp_amt;
                
                char temp_id[50];
                strcpy(temp_id, a[j].product_ID);
                strcpy(a[j].product_ID, a[j+1].product_ID);
                strcpy(a[j+1].product_ID, temp_id);
            }
        }
    }
}

int main()
{
    product a[10];
    int p_count=0;
    
    int n;
    printf("Enter input Number:");
    scanf("%d", &n);
    
    for(int i=0;i<n;i+=1)
    {
        char input[50];
        printf("Enter input(productid-amount): ");
        scanf("%s", input);
        
        char *token = strtok(input, "-");
        int count=0, index=-1;
        while(token!=NULL)
        {
            if(count==0)
            {
                index = check_product(a, token, p_count);
                if(index==-1)
                {
                    strcpy(a[p_count].product_ID, token);
                }
                
            }
            else if(count==1)
            {
                int amt = atoi(token);
                if(index>-1)
                {
                     a[index].quantity += amt;
                }
                if(index==-1)
                {
                    a[p_count].quantity = amt;
                    p_count+=1;
                }
            }
            count+=1;
            token = strtok(NULL, "-");
        }
    }
    
    sort_product(a, p_count);
    
    for(int i=p_count-1;i>=0;i-=1)
    {
        printf("%s-%d\n", a[i].product_ID, a[i].quantity);
    }
    return 0;
}
