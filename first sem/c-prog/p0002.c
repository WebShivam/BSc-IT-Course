//program to find the value of quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2;
    int a,b,c,d;
    printf("Give the values of a,b and c accordingly");
    scanf("%d%d%d", &a,&b,&c);
    // we'll take three cases cause its good in long run
    d = (b*b-(4*a*c))/2*a;
    if(d>0){
    x1= -b + sqrt(d);
    x2= -b - sqrt(d);
    }
    if (d=0){
        x1=x2= -b/2*a;
    }
    if (d<0){
        x1= -b/2*a + d*(-1);
        x2 = -b / 2 * a - d*(-1);
    }
    printf("The two values of x are %f and %f", x1,x2);
    return 0;
}
