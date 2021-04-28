#include<stdio.h>
int main(){
    int no1, no2;
    int choice;
    printf("Enter Choice 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d", &choice);
    printf("Enter number1 :\n");
    scanf("%d",&no1);
    printf("Enter number2 :\n");
    scanf("%d",&no2);
    switch (choice)
    {
    case 1: 
        printf("Addition of numbers is %d:", no1 + no2);
        break;
    case 2: 
        printf("Addition of numbers is %d:", no1 - no2);
        break;
    case 3: 
        printf("Addition of numbers is %d:", no1 * no2);
        break;
    case 4: 
        printf("Addition of numbers is %d:", no1 / no2);
        break;    
    //square number
    default:printf("Invalid Input");
        break;
    }
    return 0;
}