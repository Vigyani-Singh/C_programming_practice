/**
 * demostrate Do while loop
*/

#include<stdio.h>

int main(void ){

    char alpha ;
    do{

         printf("Enter any alphabet from a-z\n");
        scanf("%c", &alpha);
        printf("%c\n", alpha);

    }while(alpha != 'p' );

    //howework 
    //you have implement switch case with do while for giving option to user 
    //that which opration he had to perform (+ - * / or N which is nothing)
    //when user give input N you have to stop  until that you have to ask user to do some opration (+ - * /)


    return 0;
}