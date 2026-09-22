//Implement a function to prints a 2D‑array, given a pointer to the array, and its corresponding width and height.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int (*arr)[3], int width, int height){
    printf("Array at location %p \n Width %d \n Height %d", arr, width, height);

    printf("\nprinting contents with bracket array notation\n");

    int width_counter, height_counter;


    for (width_counter = 0; width_counter < width; width_counter++)
    {
        printf("[");
        for (height_counter = 0; height_counter < height; height_counter++)
        {
            printf("%d ", arr[width_counter][height_counter]);
        }
        printf("],\n");
    }
}

void print_array_pointer_arithmetic(int *arr, int width, int height){
    printf("Array at location %p \n Width %d \n Height %d", arr, width, height);

    printf("\nprinting contents with pointer_arithmetic\n");

    int width_counter, height_counter;

    // for (width_counter = 0; width_counter < width; width_counter++)
    // {
    //     for (height_counter = 0; height_counter < height; height_counter++)
    //     {
    //     printf("%d ", arr[width_counter * width + height_counter]);
    //     }
    // }
    for (width_counter = 0; width_counter < width; width_counter++)
    {
        printf("[");
        for (height_counter = 0; height_counter < height; height_counter++)
        {
            printf("%d ", *(arr + width_counter *3 + height_counter ));

        }
        printf("],\n");
    }
}


int main(){

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    int width = 3;
    int height = 3;

    print_array(arr, width, height);
    print_array_pointer_arithmetic((int*)arr, width, height);

        return 0;
}