
#include <stdio.h>

int main(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("the character '%c' is an alphabet\n",ch);
    }else{
         printf("the character '%c' is not an alphabet\n",ch);
    }
    return 0;

}
