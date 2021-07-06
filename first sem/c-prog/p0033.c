//WAP to find the value of the expression e^x + x^3+ sin x for x varying from 0.2 to 2.0 in steps of 0.2
#include <stdio.h>
#include <math.h>
int main()
{

    float y = 0, x, e;
    e = 2.71828;

    for (x = 0.2; x <= 2.0; x += 0.2)
    {
        y = pow(e, x) + pow(x, 3.0) + sin(x);
        printf("%f\n", y);
    }
    return 0;
}