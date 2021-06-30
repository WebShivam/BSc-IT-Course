/* program to calculate the value of 
y = 1+x, where n=1
y=1+x/n, where n=2;
y=x^2, where n=3;
y=1+n*x, where n>3;*/
#include<stdio.h>
#include<math.h>
int main(){
    int x,n;
    float y;
    printf("Enter the value of x and n ");
    scanf("%d%d", &x,&n);
    if(n==1)
        y=1+x;
    else if(n==2)
        y = 1 + (x/n);
    else if (n==3)
        y = 1 + pow(x,n);
    else if(n>3) 
        y = 1 + n*x;
    printf("The present value of Y = %f", y);
    return 0;
}