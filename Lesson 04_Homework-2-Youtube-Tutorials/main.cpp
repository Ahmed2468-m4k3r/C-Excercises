#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    do{
        string name1;
    int ID1;
    double grade1;

    string name2;
    int ID2;
    double grade2;

    double average;

    cout << "Enter the first name\n";
        cin >> name1;
    cout << "\nEnter the first ID\n";
        cin >> ID1;
    cout << "\nEnter the first grade\n";
        cin >> grade1;

    cout << "\nEnter the second name\n";
        cin >> name2;
    cout << "\nEnter the second ID\n";
        cin >> ID2;
    cout << "\nEnter the second grade\n";
        cin >> grade2;

    average = grade1 + grade2;

    cout << "\nStudents grades in math :\n\n" << name1 << " (with id " << ID1 << ") " << "got grade: " << grade1;
    cout << "\n" << name2 << " (with id " << ID2 << ") " << "got grade: " << grade2;
    cout << "\n\nAverage grade is " << average / 2 << "\n";

    cout << "\nPress Q to exit or any key to continue\n\n";
    }
    while(_getch() != 'q');
}
