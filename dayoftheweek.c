
#include <stdio.h>


int main(){
    int num;
    printf("enter number to determine the day:");
    scanf("%d",&num);
    if(num == 1){
        printf("today is monday!!");
    }else if(num == 2){
        printf("today is tuesday!!");
    }else if(num == 3){
        printf("today is wednesday!!");
    }else if(num == 4){
        printf("today is thursday!!");
    }else if(num == 5){
        printf("today is friday!!");

    }else if(num == 6){
        printf("today is saturday!!");
    }else{
        printf("today is sunday!!");
    }
    return 0;

}
