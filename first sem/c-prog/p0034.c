// program to check whether the number is palindrone
#include <stdio.h>
int main()
{
    int num, rem, rev_num = 0;
    printf("Enter the number ");
    scanf("%d", &num);
    int x = num;
    while (num != 0)
    {
        rem = num % 10;
        rev_num = rev_num * 10 + rem;
        num /= 10;
    }
    printf("The reverse number  is %d", rev_num);
    if (rev_num == x)
    {
        printf("\nThe number is palindrome");
    }
    else if (rev_num != x)
    {
        printf("\nThe number is not palindrome");
    }
    return 0;
}