//program to calculate CI
/* formula
    compound interest, CI = P*(1+r/100)^t
    Final amount, A = P (1+r/n)^nt
*/   
#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,ci;
    printf("Enter the Principle amount");
    scanf("%f", &p);
    printf("Enter the rate of interest");
    scanf("%f", &r);
    printf("Enter the Time Period");
    scanf("%f", &t);
    ci = p*(pow((1+r/100),t));
    printf("The Compound Interest is %f",ci);
    return 0;
}