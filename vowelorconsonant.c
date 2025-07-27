
#include <stdio.h>

int main(){
    char ch;
    printf("enter the character :");
    scanf("%c",&ch);
    if (ch == 'a'| ch == 'e'|ch == 'i'|ch == 'o'|ch == 'u'){
        printf("the character is a vowel!!");
    } else {
        printf("the character is a consonant!!");
    }

    return 0;

}

