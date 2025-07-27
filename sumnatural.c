
#include <stdio.h>

int main(){
    int n,sum = 0;
    printf("enter the number n:");
    scanf("%d",&n);
    if (n<=0){
        printf("enter only positive numbers");
        return 1;
    }
    for(int i = 1; i<=n ;i++){
        sum += i;
    }
    printf("sum of the first  natural numbers: %d\n",sum);

    return 0;

}

