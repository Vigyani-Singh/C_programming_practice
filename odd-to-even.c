// take input from user 
// check if no is odd, if no is odd the sub 1 from number and print 
// even no is calculatedNo

#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if (num % 2 == 1)
    {
        num = num-1;
        
    }

    printf("converted number %d to even", num);
    
    return 0;
}
