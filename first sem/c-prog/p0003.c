//program to convert temp from celsius to fahrenheit and vice-versa

/*Formula
        c = 5/9 * (f-32)
        f = (9*c +160)/5 
*/
#include <stdio.h>
int main()
{
    int c;
    //float f; 
    printf("Enter the temperature in celsius\n");
    scanf("%d", &c);
    printf("the temp in fahrenheit is %d \n", (9*c +160)/5); 
    return 0;
}