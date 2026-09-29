#include <stdio.h>
#include "array.h"

Array *array_create_and_read(FILE *input)
{
    int n;
    fscanf_s(input, "%d", &n);
    /* Create array */
    Array *arr = array_create(n, NULL);
    /* Read array data */
    for (int i = 0 ; i < n ; ++i)
    {
        int x;
        fscanf_s(input, "%d", &x);
        array_set(arr, i, x);
    }
    return arr;
}

void task1(Array *arr)
{
    if (array_size(arr) == 0)
        return;

    int max = (int)array_get(arr, 0);

    for (size_t i = 2; i < array_size(arr); i += 2) {
        int value = (int)array_get(arr, i);

        if (value > max)
            max = value;
    }

    printf("%d ", max);
}

void task2(Array *arr)
{
    int first = 1;

    for (size_t i = 0; i < array_size(arr); ++i) {
        int value = (int)array_get(arr, i);
        int divisible = 0;

        for (size_t j = 0; j < array_size(arr); ++j) {
            if (i == j)
                continue;

            int other = (int)array_get(arr, j);

            if (other == 0)
                continue;

            if (value % other == 0) {
                divisible = 1;
                break;
            }
        }

        if (!divisible) {
            if (!first)
                printf(" ");

            printf("%d", value);
            first = 0;
        }
    }

    printf("\n");
}

int main(int argc, char **argv)
{
    Array *arr = NULL;
    FILE *input = fopen(argv[1], "r");
    arr = array_create_and_read(input);
    task1(arr);
    array_delete(arr);
    /* Create another array here */
    arr = array_create_and_read(input);
    task2(arr);
    array_delete(arr);
    fclose(input);
}