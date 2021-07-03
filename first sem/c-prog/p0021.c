//WAP to find the sum of the following series : 1 +(1+2)+(1+2+3)+(1+2+3+...+n)
#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("sum of series :  %d", (n * (n + 1) * (2 * n + 4)) / 12);
    return 0;
}