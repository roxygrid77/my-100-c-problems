#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    double D,alpha,beta;
    printf("enter a,b,c:");
    scanf("%lf %lf %lf",&a,&b,&c);
    D = b*b - 4*a*c;
    if(D > 0){
        alpha = (-b + sqrt(D))/(2*a);
        beta = (-b - sqrt(D))/(2*a);
        printf("the roots ae real and distinct:\n");
        printf("alpha=%.2lf\n",alpha);
        printf("beta=%.2lf\n",beta);
    }else if(D==0){
        alpha = beta = (-b)/(2*a);
        printf("the roots are equal!!");
        printf("alpha=beta = %.2lf\n",alpha);
    }else{
        printf("the equation has no real roots!!!!");
    }

    return 0;
}