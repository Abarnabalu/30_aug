#include<stdio.h>
int duplicate(int array[],int length);
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

    duplicate(arr,size);
    return 0;
}
int duplicate(int array[],int length)
{
    int cnt=0;
    for(int j=0; j<length; j++)
    {
        for (int k=j+1; k<length; k++)
        {
            if(array[j]== array[k])
            {
                cnt++;
                printf("%d",array[j]);
                break;
            }


        }
    }

}
