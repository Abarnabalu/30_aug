#include<stdio.h>
int two_d(int rows,int cols,int array[rows][cols]);
int main()
{
    int row,col;
    printf("enter the size of rows and columns:\n ");
    scanf("%d\n %d",&row,&col);
    int arr[row][col];
    printf("Enter the values in an array:\n");
    for (int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    two_d(row,col,arr);
    return 0;
}
int two_d(int rows,int cols,int array[rows][cols])
{
    for(int j=0; j<rows; j++)
    {
        for(int k=0; k<cols; k++)
        {
            printf("%d",array[j][k]);
        }
        printf("\n");
    }

    printf("\n");
}
