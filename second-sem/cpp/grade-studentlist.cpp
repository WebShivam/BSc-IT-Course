//program to find grade of a list of students given their marks
#include <iostream>
using namespace std;
int main()
{
    int size;
    int array[size];
    cout << "Enter the size of the list of student: ";
    cin >> size;
    for (int i = 1; i <=size; i++)
    {
        cout << "Enter the marks of student " << i << ": ";
        cin >> array[i];
    }
   // cout<<"The values you entered are:"<< endl;
    for (int i = 1; i <=size; i++)
    {
        if (array[i] >= 91 and array[i] <= 100)
            cout << "Your Grade is A1" << endl;
        else if (array[i] >= 81 and array[i] < 91)
            cout << "Your Grade is A2" << endl;
        else if (array[i] >= 71 and array[i] < 81)
            cout << "Your Grade is B1" << endl;
        else if (array[i] >= 61 and array[i] < 71)
            cout << "Your Grade is B2" << endl;
        else if (array[i] >= 51 and array[i] < 61)
            cout << "Your Grade is C1" << endl;
        else if (array[i] >= 41 and array[i] < 51)
            cout << "Your Grade is C2" << endl;
        else if (array[i] >= 33 and array[i] < 41)
            cout << "Your Grade is D" << endl;
        else if (array[i] >= 0 and array[i] < 33)
            cout << "Your Grade is E, you have Failed" << endl;
        else
            cout << "Invalid Input" << endl;
    }
    
    return 0;
}