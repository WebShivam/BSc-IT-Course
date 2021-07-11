//program to multiply two matrices
//**IMPORTANT** column of 1st matrix  must be matched with the row of 2nd matrix
//for instance, A2*3 X B3*4 = C2*4 and A2*2 X B2*2 = C2*2;
#include <stdio.h>
int main()
{
    int r, c, a[50][50], b[50][50], prod[50][50], i, j;
    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &r);
    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter elements in matrix A%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter elements in matrix B%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // multiplication of two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            prod[i][j] = a[i][j]*b[i][j];
        }

    // printing the result
    printf("\nproduct of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", prod[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
    return 0;
}
