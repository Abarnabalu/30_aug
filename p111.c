#include <stdio.h>

int deletion(int index, int size, int array[], int new_array[]);
int display(int size, int array[]);

int main()
{
    int size, ind, new_size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the values in the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position you want to delete: ");
    scanf("%d", &ind);

    printf("Array before deletion:\n");
    display(size, arr);

    int new_arr[size - 1];
    new_size = deletion(ind, size, arr, new_arr);

    printf("\nArray after deletion:\n");
    display(new_size, new_arr);

    return 0;
}

int deletion(int index, int size, int array[], int new_array[])
{
    int new_size = size - 1;
    for (int i = 0, j = 0; i < size; i++)
    {
        if (i != index - 1)
        {
            new_array[j++] = array[i];
        }
    }
    return new_size;
}

int display(int size, int array[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
