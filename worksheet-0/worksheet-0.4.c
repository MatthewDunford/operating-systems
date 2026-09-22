//Write a program that reads the following numbers from a file, and prints their sum.



#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){


FILE *fp = fopen("foo.txt", "r");
int ch;

if(fp == NULL){
    printf("unable to open file");
    return 1;
}
int storing = 0;
int num = 0;

while (fscanf(fp, "%d", &num) == 1){
    storing += num;

}

fclose(fp);

printf("%d", storing);

printf("\n");

return 0;
}