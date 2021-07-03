//program to print numbers between 100 & 200 which are divisible by 7
#include<stdio.h>
int main(){
    int i,m,n;
    printf("Enter the lower limit: ");
    scanf("%d",&m);
    printf("Enter the upper value: ");
    scanf("%d",&n);
    printf("The numbers which are divisible by 7 : ");
    for(i=m;i<n;i++){
        if (i%7==0)
            printf("%d\n",i);
    }
    return 0;
}