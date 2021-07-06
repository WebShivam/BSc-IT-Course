//program to print the number of days in month using switch case
#include<stdio.h>
int main(){
    int n;
    printf("Enter Month Index ");
    scanf("%d",&n);
    switch(n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days");
            break;
        case 2:
            printf("28 Days");
            break;
        default:
            printf("Invalid Month");
            break;
    }
    return 0;
}