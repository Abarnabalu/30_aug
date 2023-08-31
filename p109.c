#include<stdio.h>
int reverse(int r,int c,int array[r][c],int final_arr[r][c]);
int display(int r,int c,int array[r][c]);
int main()
{
    int row,col;
    printf("enter the size of rows and columns:\n ");
    scanf("%d\n %d",&row,&col);
    int arr[row][col],result[row][col];
    printf("Enter the values in an array:\n");
    for (int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix before reversing:\n");
    display(row,col,arr);
    reverse(row,col,arr,result);
    printf("Matrix after reversing:\n");
    display(row,col,result);
    return 0;
}
int reverse(int r,int c,int array[r][c],int final_arr[r][c])
{

for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            final_arr[i][j]=array[r-1-i][c-1-j];
        }
    }
}
int display(int r,int c,int array[r][c])
{
    for(int j=0; j<r; j++)
    {
        for(int k=0; k<c; k++)
        {
            printf("%d\t",array[j][k]);
        }
        printf("\n");
    }
    printf("\n");
}

