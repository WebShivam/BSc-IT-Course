//program to print all odd numbers upto N
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the upper limit ");
    scanf("%d", &n);
    printf("All the odd numbers in the given limit are listed below : ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            printf("\n%d", i);
    }
    return 0;
}