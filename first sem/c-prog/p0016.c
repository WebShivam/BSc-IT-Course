//program to calculate y= 1.36 sqrt(1+x+x^3) where x is from 1.0 to 3.0 with increment of 0.2;
#include<stdio.h>
#include<math.h>
int main(){
    float i,x,y;
    printf("Enter the value of x ");
    scanf("%f",&x);
    for(i=1.0;i<=3.0;i=i+0.2){
     y = 1.36 * sqrt(1+x+pow(x,3));}
    printf("\n value of y: %f",y);
    return 0;
}