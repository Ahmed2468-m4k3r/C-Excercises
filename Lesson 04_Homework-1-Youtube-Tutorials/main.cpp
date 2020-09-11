#include <iostream>
#include <conio.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    do{

    srand((unsigned)time(0));

    int randomizer;
    float num1 = 0 , num2 = 0 ;
    char operation;

    randomizer = (rand()%3)+1;

    cout << "Enter the first number\n";
        cin >> num1;
    cout << "\nEnter the second number\n";
        cin >> num2;
    cout << "\nEnter an operation (+, -, *, /)\n";
        cin >> operation;
    cout << "\n";
        sleep(randomizer);
    switch(operation)
    {
        case '+' : cout << num1+num2;+ "\n" ;
            break ;
        case '-' : cout << num1-num2;+ "\n" ;
            break ;
        case '*' : cout << num1*num2;+ "\n" ;
            break ;
        case '/' : if(num2 == 0){cout << "Cannot divide by zero\n";}else{cout << num1/num2;+ "\n" ;}
            break ;
        default : cout << "Please enter the required operation (+, -, *, /)\n";
    }
    cout << "\nPress Q to exit or any key to continue\n\n";
    }
    while( _getch() != 'q');
}
