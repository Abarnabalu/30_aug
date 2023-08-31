#include<stdio.h>
int odd_array(int size,int array[size],int odd_size,int odd_array[odd_size]);
int even_array(int size,int array[],int even_size,int even_array[]);
int main()
{
    int size,od_size=0,ev_size=0;
    printf("enter the size of array:\n ");
    scanf("%d",&size);
    int arr[size],odd_arr[size],ev_arr[size];
    printf("Enter the values in an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    od_size=odd_array(size,arr,od_size,odd_arr);
    display(od_size,odd_arr);
    ev_size=even_array(size,arr,ev_size,ev_arr);
    display(ev_size,ev_arr);
    return 0;

}
int odd_array(int size,int array[],int odd_size,int odd_array[])
{
    odd_size=0;

    for(int i=0; i<size; i++)
    {
        if(array[i]%2==1)
        {

            odd_array[odd_size]=array[i];
            odd_size++;

        }

    }
    return odd_size;
}
int even_array(int size,int array[],int even_size,int even_array[])
{
    even_size=0;

    for(int i=0; i<size; i++)
    {
        if(array[i]%2==0)
        {

            even_array[even_size]=array[i];
            even_size++;

        }

    }
    return even_size;
}

int display(int size,int array[size])
{
    for(int i=0; i<size; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
}

