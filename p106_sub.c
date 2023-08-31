#include<stdio.h>
int sub(int r1,int c1,int array1[r1][c1],int array2[r1][c1],int third_arr[r1][c1]);
int display(int r1,int c1,int array[r1][c1]);
int main()
{
    int row1,col1;
    printf("enter the size of row1,col1:\n");
    scanf("%d%d",&row1,&col1);
    int arr1[row1][col1],arr2[row1][col1],res[row1][col1];
    printf("Enter the values in an array1:\n");
    for (int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the values in an array2:\n");
    for (int i2=0; i2<row1; i2++)
    {
        for(int j2=0; j2<col1; j2++)
        {
            scanf("%d",&arr2[i2][j2]);
        }
    }
    int res_arr=sub(row1,col1,arr1,arr2,res);
    printf("The resultant matrix:\n");
    display(row1,col1,res);

    return 0;
}
int sub(int r1,int c1,int array1[r1][c1],int array2[r1][c1],int third_arr[r1][c1])
{



    for (int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            third_arr[i][j]= array1[i][j] - array2[i][j];
        }
    }
}
int display(int r1,int c1,int array[r1][c1])
{
    for(int j=0; j<r1; j++)
    {
        for(int k=0; k<c1; k++)
        {
            printf("%d\t",array[j][k]);
        }
        printf("\n");
    }

    printf("\n");
}

