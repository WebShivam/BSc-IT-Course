//program to find the  trace of square matrix
#include <stdio.h>
int main()
{
    int a[10][10], trace[10][10], i,j,r, c,sum;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // asssigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // printing the matrix a[][]
    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }
    sum=0;
    for ( i = 0; i < r; i++)
    {
        sum = sum + a[i][i];
    }
    
    printf("The trace of matrix: %d",sum);
    return 0;
}
