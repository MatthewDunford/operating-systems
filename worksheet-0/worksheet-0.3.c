// Implement a function that takes two pointers, to the same type, along with a length parameter.
// If the pointers are not null,
//then check that the elements are the same, for length, and return true
// (1), otherwise false (0). Write a main function to test your function.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char var1[20]; // not doing math so don't need int
    printf("input num 1: ");
    scanf("%s", var1);
    char *point1 = var1;


    printf("\n");

    char var2[20];
    printf("input num 2: ");
    scanf("%s", var2);
    char *point2 = var2;


    if (point1 == NULL|| point2 == NULL){
        printf("value cannot be null");
        return 0;
    }

    printf("\n");

    if(strcmp(point1, point2) == 0 && strlen(var1) == strlen(var2)){
        printf("True");
    }
    else{
        printf("False");
    }


    printf("\n");



}