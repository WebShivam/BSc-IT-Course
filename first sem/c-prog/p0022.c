//program to print even integers between m and n
#include<stdio.h>
int main(){
    int i,m,n,val;
    printf("Enter the upper limit & lower limit ");
    scanf("%d%d", &m,&n);
    printf("the even numbers are : ");
    for (i=m; i<n; i++){
        if(i%2==0)
        printf("\n%d",i);
    }
    return 0;
} 