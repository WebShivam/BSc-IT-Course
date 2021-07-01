//program to give sum of N numbers using for loop
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the value of N ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
      sum+=i;
    printf("\nThe Summation = %d", sum);
    return 0;
}