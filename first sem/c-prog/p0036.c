//prgram to generate fibonacci series
#include<stdio.h>
int main(){
    int i,n,t1=0,t2=1,nexterm=0;
    nexterm = t1 + t2;
    printf("Enter the number of terms you want ");
    scanf("%d",&n);
    printf("%d,%d,",t1,t2);
    for(i=3;i<=n;i++){
        printf("%d,",nexterm);
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
    }
    return 0;
}