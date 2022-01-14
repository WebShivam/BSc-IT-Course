// program to find the grade of a student given his marks
// solved : using switch case
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter marks out of 100" << endl;
    cin >> marks;
    switch (marks / 10)
    {
        case 10:
        case 9:
            cout << "The Student got grade: A+ " << endl;
            break;
        case 8:
            cout << "The Student got Grade: A" << endl;
            break;
        case 7:
            cout << " The student got Grade : B+" << endl;
            break;
        case 6:
            cout << " The student got Grade : B" << endl;
            break;
        case 5:
            cout << " The student got Grade : C" << endl;
            break;
        case 4:
            cout << " The student got Grade : D (JUST PASSED) " << endl;
            break;
        default:
            cout << " The student got Grade : E (FAILED)" << endl;
            break;
    }
    return 0;
}