//porogram to reverse a number
#include <stdio.h>
int main(){
    int i, num, r, rev = 0;
    printf("Enter the Number: ");
    scanf("%d", &num);
    while (num != 0){
    r = num % 10;
    rev = rev * 10 + r;
    num /= 10;
    }
    printf("The reversed number = %d", rev);
    return 0;
}