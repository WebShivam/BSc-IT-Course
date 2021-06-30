//program to calculate SI
#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter the principle amount ");
    scanf("%f",&p);
    printf("Enter the rate of interest ");
    scanf("%f", &r);
    printf("Enter the time period in years ");
    scanf("%f", &t);
    printf("The Simple interest willbe %f",(p*r*t)/100);
    return 0;
}