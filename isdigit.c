
#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if (isdigit(ch)){
        printf("the character '%c' is an digit\n",ch);
    }else{
         printf("the character '%c' is not an digit\n",ch);
    }
    return 0;

}
