#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    do{
        int even1;
    int even2;
    int even3;
    int even4;
    int odd1;
    int odd2;
    int odd3;
    int odd4;

    cout << "Enter even numbers\n";
        cin >> even1 >> even2 >> even3 >> even4;
    cout << "\nEnter odd numbers\n";
        cin >> odd1 >> odd2 >> odd3 >> odd4;

    cout << "\nThe sum of the even numbers you wrote is : " << even1 + even2 + even3 + even4;
    cout << "\n\nThe sum of the odd numbers you wrote is : " << odd1 + odd2 + odd3 + odd4 << "\n";

    cout << "\nPress Q to exit or any key to continue\n\n";
    }
    while(_getch() != 'q');
}
