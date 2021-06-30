/* WAP in switch case with given condition below
y(x,n)= 1+x, n=1;
        1+x/n, n=2;
        1+x^n, n=3 ;
        1+n*x, n>3 || n<1;
*/
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float x,y;
    printf("Enter the value of x and n ");
    scanf("%f%d",&x,&n);
    switch(n)
    {
        case 1: y= 1+x;
                break;
        case 2: y + 1+x/n;
                break;
        case 3: y= 1+ pow(x,n);
                break;
        default: y = 1+n*x;
                break;
    }
    printf("The value of Y(x,n) = %f", y);
    return 0;
}