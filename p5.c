#include <stdio.h>
int main(){
    float celcius,fahrenheit;
    printf("enter the celcius:");
    scanf("%f",&celcius);
    fahrenheit = ((9*celcius)/5)+32;
    printf("the fahrenheit value of given celcius is: %f\n",fahrenheit);
    return 0;
}