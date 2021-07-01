//program to calculate celsius to fahrenheit and vice-versa using switch case
#include<stdio.h>
int main()
{
    int in;
    float c,f;
    printf("Enter 1 for temp. in degC ");
    printf("\nEnter 2 for temp. in degF ");
    scanf("%d",&in);
    if (in==1){
        printf("Enter the temperature in degF \n");
        scanf("%f", &f);
        printf("the temp in deg Celsius = %f \n", (f-32)*5/9);
    }
    if (in==2){
        printf("Enter the temperature in degC \n");
        scanf("%f", &c);
        printf("the temp in degree fahrenheit is %.2f \n", (9 * c + 160) / 5);
    }
    return 0;
}