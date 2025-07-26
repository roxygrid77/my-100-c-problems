
#include <stdio.h>
#include <math.h>
int main(){
    int base,exponent,result = 1;
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the exponent:");
    scanf("%d",&exponent);
    while (exponent != 0) {
        result *= base;
        --exponent;
    }
    printf("the answer of given number: %d\n",result);
    return 0;

}

