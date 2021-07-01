//find the factorial of a given number
#include <stdio.h>
int main()
{
    int i, n,fact=1;
    printf("Enter the value of N ");
    scanf("%d", &n);
    if(n<0)
        printf("\nfactorial of negative number doesn't exist");
    else{
        printf("\nthe factorial of given number is : ");
        for (i = 1; i <= n; i++)
        {
            fact*=i;
        }
        printf("\n%d", fact);
    }
    return 0;
}