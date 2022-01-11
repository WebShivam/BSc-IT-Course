#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter any three number"<<endl;
    cin>>num1>>num2>>num3;
    if((num1>num2) && (num1>num3)){
        cout << num1<<" is the greatest number of all" << endl;
    }
    else if ((num2 > num3) && (num2 > num1))
    {
        cout << num2<< " is the greatest number of all" << endl;
    }
    else{
        cout<<num3<<" is the greatest number"<<endl;
    }
    return 0;
}