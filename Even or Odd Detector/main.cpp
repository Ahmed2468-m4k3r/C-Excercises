#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    do{
        int num = 0 ;
    int detector = 0 ;

    cout << "Enter a number : ";
    cin >> num;

    detector = num % 2;

    if(detector == 0)
        cout << "\nEven\n";
    else if(detector == 1)
        cout << "\nOdd\n";

    cout << "\nPres Q to exit or any key to continue\n";
    }
        while(_getch() != 'q');
}
