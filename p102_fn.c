#include<stdio.h>
int average(int array[4]);
int main()
{
    int arr[4],avg,sum=0;
    printf("Enter the values in an array:\n");
    for (int i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    }
    avg=average(arr);
    printf("The average is %d",avg);
    return 0;
}
int average(int array[4])
{
    int sum=0;
    for(int i=0; i<4; i++)
    {
        sum += array[i];
    }
    printf("The sum is : %d\n",sum);
    return sum/4;
}
