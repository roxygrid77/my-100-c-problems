
#include <stdio.h>

int main(){
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    if (marks >= 90){
        printf("u got A grade!!");
    }else if(marks >= 80){
        printf("u got B grade!!");
    }else if(marks >= 70){
        printf("u got C grade!!");
    }else if(marks >= 60){
        printf("u got D grade!!");
    }else{
        printf("u failed!!");
        printf("u got F grade!!");
    }
    return 0;

}
