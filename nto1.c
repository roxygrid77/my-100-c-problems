#include <stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    for (int i = 1; i < num  ; i++){
        printf("%d\n",num-i);
    }
    return 0;
}