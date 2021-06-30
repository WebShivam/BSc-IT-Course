/* write a program to compute according to Formula 
y = 1.2*x + 0.98, if x<=1.0
y = 1.7*x - 0.9, if x>1.0; */
#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the value of x ");
    scanf("%f", &x);
    if (x <= 1.0)
        y = (1.2*x) + 0.98;
    else
        y = (1.7*x) - 0.9;
    printf("The value of Y should be = %f", y);
    return 0;
}