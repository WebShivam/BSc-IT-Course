//Find first N Even and Odd Numbers
#include <iostream>
using namespace std;
int main(){
    int e_num, o_num; //shorthand for evennumber & oddnumber
    cout<<"Enter the Maximum limit value to print Even numbers ";
    cin>>e_num;
    cout << "The first " << e_num << " even numbers are: ";
    for(int i=0;i<=e_num;i++){
        if(i%2==0)
            cout<<i<<endl;
    }
    cout << "Enter the Maximum limit value to print Odd numbers "<< endl;
    cin >> o_num;
    cout << "The first " << o_num << " even numbers are: "<< endl;
    for (int i = 0; i <= o_num; i++)
    {
        if (i % 2 != 0)
            cout << i << endl;
    }
}