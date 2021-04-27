#include<stdio.h>
int num = 69, step, result;
int main(){
for(step=0;step<=10;step++){
    result = num*step;
    printf("%d x %d = %d\n ", num, step, result);
}
    return 0;
}

