#include<stdio.h>
int main(){
    char alpha;
     
    while(alpha != 'p'){
        printf("Enter any alphabet from a-z\n");
        scanf("%c", &alpha);
        printf("%c", alpha);
        
    }
    return 0;
}