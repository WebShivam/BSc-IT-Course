// WAP to compute Z for all pairs of (x,y)
// Z = 3*x^2 + 2*y^3 - 25.5 , x varies from -1.5 to 1.5, y varies from 0 to 3
#include<stdio.h>
#include<math.h>
int main(){
    float x,y,z;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("\nEnter the value of y: ");
    scanf("%f", &y);
    for(x=-1.5; x<1.5; x+0.5){
        for (y = 0; y < 3; y + 1){
            z = (3*pow(x,2)) + (2*pow(y,3)) - 25.5;
        }
        //printf("The value of z : %f", z);
    }
    printf("The value of z : %f",z);
    return 0;
}