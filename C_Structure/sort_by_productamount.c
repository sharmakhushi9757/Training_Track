#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct product_sales{
    char product_ID[10];
    int total_sales_amount;
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
            if(a[j].total_sales_amount>a[j+1].total_sales_amount)
            {
                int temp_amt = a[j].total_sales_amount;
                a[j].total_sales_amount = a[j+1].total_sales_amount;
                a[j+1].total_sales_amount = temp_amt;
                
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
                if(index>-1 & a[index].total_sales_amount<amt)
                {
                     a[index].total_sales_amount = amt;
                }
                if(index==-1)
                {
                    a[p_count].total_sales_amount = amt;
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
        printf("%s-%d\n", a[i].product_ID, a[i].total_sales_amount);
    }
    return 0;
}
