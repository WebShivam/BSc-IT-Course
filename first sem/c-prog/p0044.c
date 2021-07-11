//program to sort numbers in descending order(linear sort)
#include<stdio.h>
int main(){
    int i,j,n,a,arr[40];
    printf("Enter the size of the Numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= n; i++){
        for (j = i+1; j <= n; j++){
            if(arr[i] < arr[j]){
                a= arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    printf("The numbers in descending order are:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
    
}