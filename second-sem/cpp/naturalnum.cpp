// program to print the first ten natural Numbers

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number" << endl; // here, num == total natural number counts
    cin >> num;
    cout<<"The first " <<num<< " natural numbers are:";
    for (int i=1; i<=num;i++)
        cout<<i<<endl;
    return 0;
}