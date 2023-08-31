#include<stdio.h>
int one_d(int array[],int size);
int main()
{
    int size;
    printf("enter the size of array:\n ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the values in an array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    one_d(arr,size);
    return 0;
}
int one_d(int array[],int size)
{
    for(int j=0; j<size; j++)
    {
        printf("%d",array[j]);
    }
    printf("\n");

}
