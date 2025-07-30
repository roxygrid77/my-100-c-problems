#include <stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("enter angles:");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    if(angle1+angle2+angle3 == 180){
        printf("the triangle is valid!!");
    }else{
        printf("the triangle is not valid!!");
    }
    
    return 0;
}