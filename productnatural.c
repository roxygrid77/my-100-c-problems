
#include <stdio.h>

int main(){
    int n,product = 1;
    printf("enter the number n:");
    scanf("%d",&n);
    if (n<=0){
        printf("enter only positive numbers");
        return 1;
    }
    for(int i = 1; i<=n ;i++){
        product *= i;
    }
    printf("product of the first  natural numbers: %d\n",product);

    return 0;

}

