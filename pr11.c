//average of three numbers
#include <stdio.h>
int main(){
    int num1,num2,num3,average;
    printf("Enter the first number:");
    scanf("%d",&num1);

    printf("Enter the second number:");
    scanf("%d",&num2);

    printf("Enter the third number:");
    scanf("%d",&num3);

    average = (num1 + num2 + num3)/3;
    printf("the average of three numbers is = %d\n",average);
    return 0;
}