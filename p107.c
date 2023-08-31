#include<stdio.h>
int frequency(int size, int array[size]);
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

    frequency(size,arr);
    return 0;

}
int frequency(int size, int array[size])
{

    for(int i=0; i<size; i++)
    {
        int count=1;
        for(int j=i; j<size; j++)
        {
            if(array[i]==array[j])
            {
                ++count;
                break;
            }
        }
        printf("The frequency of %d is :%d\n",array[i],count);
    }


}
