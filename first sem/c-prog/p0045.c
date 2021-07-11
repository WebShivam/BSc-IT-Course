//program to search key value in a set of N values print the position of the key value if it is successfully found
#include<stdio.h>
int main(){
    int i,n,arr[30],s,val=0;
    printf("Enter the total size of number list: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search in the list: ");
    scanf("%d",&s);
    for (i = 0; i <=n; i++)
    {
        if (s == arr[i]){
        val=1;
        break;}
    }
    if(val==1)
    {
        printf("Yes, the number is present in the list and it is positioned at %d",i);
    }
    else
    {
        printf("No, the number is not present in the list");
    }
    return 0;
}