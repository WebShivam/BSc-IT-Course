// program to find the divisor or factorial of a given number
#include <iostream>
using namespace std;
int main()
{
    int num, div;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    cout<<"The divisors of the number are: ";
    for(div=1;div<=num;div++){
        if(num%div==0){
        cout<<div<<endl;
        }
    }
    return 0;
}