#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,x1,x2,real,imag;
	printf("Enter the value of all coefficients\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("The quadratic equation is %.2lfx^2 + %.2lfx + %.2lf\n",a,b,c);
	d=(b*b)-(4*a*c);
	if(d>0){
		x1=  -b +sqrt(d)/(2*a);
		x2= -b -sqrt(d)/(2*a);
		printf("The two roots of the given equation are %.2lf and %.2lf\n" ,x1,x2);
	}
	else if(d==0){
		x1==x2==-b/(2*a);
		printf("The two roots are: %.2lf and %.2lf\n",x1,x2);
	}
	else{
		real=-b/(2*a);
		imag= sqrt(-d)/(2*a);
		printf("the two roots are : %.2lf + %.2lfi and %.2lf - %.2lfi" ,real,imag,real,imag);

	}
	return 0; 
}