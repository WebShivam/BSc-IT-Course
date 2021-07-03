//program to print multiplication table of N
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("\n Multiplication Table of %d :",n);
    for(i=1;i<=10;i++){
        printf("\n %d X %d = %d",n,i,n*i);
    }
    return 0;
}