#include <stdio.h>
int main(){
    int side1,side2,side3;
    printf("enter the three sides of triangle:");
    scanf("%d %d %d",&side1,&side2,&side3);

    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)){
        if(side1 == side2 && side2 == side3){
            printf("This is a equilateral triangle!!");
        }else if(side1 == side2 || side2 == side3 || side1==){
            printf("This is an isoceles triangle!!");
        }else{
            printf("this is a scalene triangle!!");
        }
    }else{
        printf("the entered side lengths do not form a triangle !!\n");
    }
    return 0;
}