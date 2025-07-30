
#include <stdio.h>


int main(){
    int units;
    float bill = 0;
    
    printf("enter total units:");
    scanf("%d",&units);

    if(units <= 100){
        bill = units * 3.5;
    }else if(units <= 200){
        bill = (100 * 1.5) + ((units - 100) * 4.0);
    }else if(units <= 300){
        bill = (100*1.5) + (100*2.5) + ((units - 200) * 5.2);
    }else{
        bill = (100*1.5) + (100*2.5) + (100*4.0) + ((units - 300) * 6.5);
    }

    printf("electricity bill for %d units =%.2f\n",units,bill);
    return 0;

}
