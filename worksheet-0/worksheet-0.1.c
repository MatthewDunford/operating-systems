//Task 1: Create a pointer to the local variable n called ptr_to_n, and use it to increase the value of n by one.Print the result


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(void) {



    printf("\n");
    printf("\n");

    int varib = 1;
    int *ptr_to_n =&varib;
    int n = 10;
    printf("%d", n);
    n += *ptr_to_n;
    printf("\n");
    printf("%d", n);

    for (int x = 0; x < 10; x++)
    {


    n += *ptr_to_n;
    printf("\n");
    printf("%d", n);

    } 

}