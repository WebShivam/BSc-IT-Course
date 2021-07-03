//program to find the sum of the digit of number
#include<stdio.h>
int main(){
    int n,q,r,sum=0;
    printf("Enter the Number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum+=r;
        n/=10;
    }
    printf("The sum of their digit= %d",sum);
    return 0;
}