#include<stdio.h>
int main(){
    int array[2];
    int *a;
    printf("Size of array %d\n",sizeof(array));
    printf("Size of int data type %d \n", sizeof(int));
    printf("Size of char data type %d \n", sizeof(char));
    printf("Size of short data type %d \n", sizeof(short));
    printf("Size of long data type %d \n", sizeof(long));
    printf("Size of float data type %d \n", sizeof(float));
    printf("Size of double data type %d \n", sizeof(double));
    printf("Size of void data type %d \n", sizeof(void));
}