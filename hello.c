#include<stdio.h>
int main(){
    int integerValue = 10;
    float floatValue  = 10.2;
    char charValueWithAscii = 220;  //using ascii code 
    char chaValueWithoutAscii = 'A'; 
    //**bool boolValue = false;
    long longValue = 123456789l;
    double doubleValue = 1254879844.784515484453454458; 
    int grabageValue;
    int array[6];
   /**
    * rule for declaring variable 
    * 1) its alphanumeric conating Alphabet, number ,and underscore 
    * 2) vriable start with _ or char 
    * 3) variable should not containt any wiledcard char 
    * 4) give meaningfull name 
**/
    printf("%d\n",integerValue);
    printf("%f\n",floatValue);
    printf("%c\n",charValueWithAscii);
    printf("%c\n",chaValueWithoutAscii);
    //printf("%d\n",boolValue);
    printf("%ld\n",longValue);
    printf("%lf\n",doubleValue);
    printf("%d\n",grabageValue);
    printf("%d\n",array);
    printf("Hello World");
    return 0;
}