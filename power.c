
#include <stdio.h>
#include <math.h>
int main(){
    int m,n,power;
    printf("enter the number:");
    scanf("%d",&m);
    printf("enter the power:");
    scanf("%d",&n);
    power = pow(m,n);
    printf("the power of given number: %d\n",power);
    return 0;

}

