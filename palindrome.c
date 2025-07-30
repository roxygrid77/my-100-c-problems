#include <stdio.h>
int isPalindrome(int num){
    int reversedNum = 0;
    int remainder;
    int originalNum = num;

    while(num != 0){
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return originalNum == reversedNum;
}
int main(){
    int number;
    printf("enter a number:");
    scanf("%d",&number);

    if(isPalindrome(number)){
        printf("%d is a palindrome number. \n",number);
    }else{
        printf("%d is not a palindrome number.\n",number);
    }
    return 0;
}