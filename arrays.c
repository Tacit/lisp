#include <stdio.h>

int main(int argc, char **argv)
{
    int ar[] = {1, 2, 3, 4, 5};
    int ar2[][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}};

    printf("int size is: %d\n", sizeof(int));
    printf("array of int with 5 elements size is: %d\n", sizeof(ar));
    printf("two demension arryay of int with 5x2 elements size is: %d\n", sizeof(ar2));
    printf("number of elements in ar2 array is: %d\n", sizeof(ar2) / sizeof(int));
    printf("number of elements in if first row of ar2 array is: %d\n", sizeof(ar2[0]) / sizeof(int));
    printf("print array using array indexes\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", ar2[i][j]);
        }
        printf("\n");
    }

    printf("print array with n-1 address arifmethic\n");

    for (int i = 0; i < 2; i++)
    {
        int *p = ar2[i];
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", *(p + j));
        }
        printf("\n");
    }

    printf("print array with line address arifmethic\n");

    for (int i = 0; i < 2; i++)
    {
        int *p = ar2;
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", *(p + i * sizeof(ar2[0]) / sizeof(int) + j));
        }
        printf("\n");
    }
    return 0;
}