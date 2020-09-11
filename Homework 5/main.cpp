#include <iostream>

using namespace std;

int main()
{

        int num1, num2, num3, answer ;
    cout << "Type the 1st number\n";
    cin >> num1;
    cout << "Type the 2nd number\n";
    cin >> num2;
    cout << "Type the 3rd number\n";
    cin >> num3;
    if(num1 > num2 && num1 > num3){
        cout << "The 1st number is the greatest\n";
    }
    else if (num2 > num1 && num2 > num3){
        cout << "The 2nd number is the greatest\n";
    }
    else if (num3 > num1 && num3 > num2){
        cout << "The 3rd number is the greatest\n";
    }
    else{
        cout << "All numbers are equal\n";
    }
    for(int cols = 0 ; cols < 3 ; cols++){
        for(int rows = 0 ; rows < 30 ; rows++){
            cout << "#";
            }
            cout << "\n";
        }
    cout << "Type 1 or 2 to type my name or type 3 or 4 to type my age\n";
    cin >> answer;
    if(answer == 1 || answer == 2){
        cout << "\nAhmed\n";
    }
    else if(answer == 3 || answer == 4){
        cout << "\n11 Years Old\n";
    }
    else{
        cout << "\nPlease type 1 or 2 to type my name or type 3 or 4 to type my age\n";
    }
}
