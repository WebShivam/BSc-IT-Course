// program to find the grade of a student given his marks
// solved : using if-else statement
#include <iostream>
using namespace std;
int main()
{
    float marks;
    string grade; 
    cout << "Enter marks out of 100" << endl;
    cin >> marks;
    if(marks>100)
        cout<<"Error! \nMarks cannot be more than 100.";
    else if (marks>=90)
        grade="A+";
    else if (marks>=80 and marks<90)
        grade="A";
    else if (marks >= 70 and marks < 80)
        grade = "B+";
    else if (marks >= 60 and marks < 70)
        grade = "B";
    else if (marks >= 50 and marks < 60)
        grade = "C";
    else if (marks >= 40 and marks < 50)
        grade = "D";
    else if (marks<40){
        cout<<"Sorry, you're failed."<<endl;
        grade = "E";
    }
    if (marks<=100){
        cout <<"The Student got Grade : "+ grade<<endl;
    }
    return 0;
}