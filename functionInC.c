/**
 * fucntion implementation
*/

#include <stdio.h>

void add(int no1 , int no2){

    printf("addtion = %d\n",(no1+no2));

}

int sub (int no1 ,int no2);
int mul(int no1);
void print ();


int  main(){

    int number1 = 0 , number2 =0 , result = 0;
    printf("enter 1st no\n");
    scanf("%d",&number1);

    printf("enter 2nd no\n");
    scanf("%d",&number2);

//calling 
    add(number1 , number2);
    add(10 , 20);

    result = sub(number1 , number2);
    printf("sub = %d\n", result);


    result = mul (number1);
    printf("mul by 10 = %d\n",result);

    print();

    return 0;

}

int sub (int no1 ,int no2){
    return no1-no2;
}

int mul(int no1){
    return no1 * 10;
}

void print(){
    printf("opration\n ");
}

