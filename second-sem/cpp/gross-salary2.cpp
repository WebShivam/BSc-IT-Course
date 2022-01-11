// write a program to find the gross salary of a person
#include <iostream>
using namespace std;
int main()
{
    int salary;
    float taxes, gsalary;
    cout << "Enter the Net Salary" << endl;
    cin >> salary;
    cout << "Enter the Tax percentage" << endl;
    cin>>taxes;
    taxes = (taxes / 100)*salary;
    gsalary = salary - taxes;
    cout << "Your Gross salary after deducting taxes = Rs." << gsalary << endl;
    return 0;
}