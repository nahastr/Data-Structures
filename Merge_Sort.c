#include <stdio.h>
#include <stdlib.h> 
void get_values(int size, int *A)
{
    printf("Enter the values: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &A[i]);
}

void merge(int *A, int size_A, int *B, int size_B, int *M, int length)
{
    for (int i = 0; i < size_A; i++)
        M[i] = A[i];

    for (int i = 0; i < size_B; i++)
        M[size_A + i] = B[i];
}

void sort(int *M, int length)
{
    for (int i = 0; i < length - 1; i++)
        for (int j = i + 1; j < length; j++)
            if (M[i] > M[j])
            {
                int temp = M[i];
                M[i] = M[j];
                M[j] = temp;
            }
}

void display(int *arr, int length)
{
    for (int i = 0; i < length; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() 
{
    int size_1, size_2, length;
    printf("Enter the size of first array: ");
    scanf("%d", &size_1);
    printf("Enter the size of second array: ");
    scanf("%d", &size_2);

    int *A = (int*)malloc(size_1 * sizeof(int)); 
    int *B = (int*)malloc(size_2 * sizeof(int)); 

    length = size_1 + size_2;
    int *M = (int*)malloc(length * sizeof(int));

    get_values(size_1, A);
    get_values(size_2, B);

    merge(A, size_1, B, size_2, M, length);

    sort(M, length);

    printf("Sorted merged array: ");
    display(M, length);

    free(A);
    free(B);
    free(M);

    return 0; 
