//program to print even numbers upto N
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the value of N ");
    scanf("%d", &n);
    printf("All the even numbers are : ");
    for (i = 1; i<= n; i++)
    {
        if(i%2==0)
            printf("\n%d", i);
    }
    return 0;
}