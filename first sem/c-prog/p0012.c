//WAP to enter a month number and display the total number of days
#include<stdio.h>
int main(){
    int m, arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter the Month no. ");
    scanf("%d",&m);
    printf("the total number of days= %d", arr[m-1]);
    return 0;
}