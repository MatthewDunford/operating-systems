//implement a program that contains the swap function, and tests it works correclty

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void swap(int *num1, int *num2){
int temp = *num1;
*num1 = *num2; 
*num2 = temp;
}

int main(){

    printf("enter number 1: ");
    int num1 = 0;
    scanf("%d", &num1);
    printf("varible num1 contains %d", num1);

    printf("\n");
    printf("\n");


    printf("enter number 2: ");
    int num2 = 0;
    scanf("%d", &num2);
    printf("varible num2 contains %d", num2);

    printf("\n");


    printf("\ncalling swap function: ");

    swap(&num1 , &num2);

    //printf("num1 is not now num2");
    printf("%d, %d\n", num1, num2);
    

    return 0;
}
