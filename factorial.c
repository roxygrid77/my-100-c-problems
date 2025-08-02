#include <stdio.h>
int main(){
    int n,factorial = 1;
    printf("enter non negative integer:");
    scanf("%d",&n);
    if(n < 0){
        printf("factorial not possible for negative integers.\n");
    }else if( n == 0){
        printf("The factorial of of 0 is 1.\n");
    }else{
        for(int i = 1; i<=n; i++){
            factorial *= i;
        }
        printf("the factorial of %d is %d.\n",n,factorial);
    }
    return 0;

}