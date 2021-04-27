/**
 * loops 
 * 1) For loop
 * 2) while
 * 3) do while
*/

#include<stdio.h>

int main (){

    //for loop
    // for(initialization ; condition ; increment or decrment){

    //     //body
    // }

    int step = 0;
    // for(step = 1 ; step < 11 ; step++ ){

    //     printf("Hello World\n");
    // }

//Printinf no from 0 to 10 

    // for(step = 0 ; step <=10 ; step += 3){
    //     printf("%d\n",step);
    // }

    // for(step=0; ;step++ ){

    //     if(step == 5){
    //         break;
    //     }
    //     printf("1");
    //     //step++;
        
    // }


    //homework
    //Print Table of 69
    // 69 X 1 = 69  using for loop

    // int step=1;
    // int  no = 69;
    // int result = no * step;
    // printf("%d X %d = %d\n", no , step , result);

//homework 
//using for loop print 1 to 20 in revers order

    //While
    int no = 100;
    while(no != 0){
        printf("%d\n",no);
        //no /= 10;
        no--;
    }

    //homewrok
    //iterater unilt you get p as a input

    return 0;
    //git status 
    //git add * / git add . / git add file name /git add file path or folder
    //git commit -m ""
    //git push  / git pull
}
