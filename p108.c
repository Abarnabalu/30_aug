#include<stdio.h>
int sml_big(int r,int c,int array[r][c]);
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
    sml_big(row,col,arr);

    return 0;
}
int sml_big(int r,int c,int array[r][c])
{
    int big=array[0][0],small=array[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(array[i][j]>big)
            {
                big=array[i][j];
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(array[i][j]<small)
            {
                small=array[i][j];
            }
        }
    }
printf("The smallest element is %d and biggest element is %d",small,big);
}

