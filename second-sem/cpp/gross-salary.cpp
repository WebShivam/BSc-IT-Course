//write a program to find the gross salary of a person
#include<iostream>
using namespace std;
int main(){
    int salary;
    float cgst, sgst, gsalary;
    cout<<"Enter the Net Salary"<<endl;
    cin>>salary;
    cgst= 0.08*salary;
    sgst = 0.08 * salary;
    gsalary = salary - (cgst + sgst);
    cout<<"Your Gross salary after deducting taxes = Rs."<<gsalary<<endl;
    return 0;
}