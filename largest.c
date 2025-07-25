
#include <stdio.h>
int main(){
    int num1,num2,largest;
    printf("enter the first number:");
    scanf("%d",&num1);
    printf("enter the second number:");
    scanf("%d",&num2);
    if(num1 > num2){
        printf("%d\n",num1,&largest);
    }else{
        printf("%d\n",num2,&largest);
    }
    return 0;
}