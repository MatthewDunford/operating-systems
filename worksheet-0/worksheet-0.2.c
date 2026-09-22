// Create an array that has 3 elements (10, 30, 2000), and declare a pointer to that array, and then
// a loop that iterates through the array, using the pointer, printing each element, and the pointer
// of that element.


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(void) {



    printf("\n");
    printf("\n");

    int arr[] = {10,30,2000};
    int *array_pointer = arr;
    int array_size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < array_size; i++)
    {
        printf("%p\n", (void*)array_pointer); 
        printf("%d\n", array_pointer[i]);
        sleep(1);

    }

    return 0;
}


