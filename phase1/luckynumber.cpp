#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Please type in a number: ";
    cin >> number;

    int num = number - 100;

    if (number > 100) {
        cout << "The number was greater than one hundred" << endl;
        cout << "Now its value has decreased by one hundred" << endl;
        cout << "Its value is now " << num << endl;
        cout << num << " must be my lucky number!" << endl;
        cout << "Have a nice day!" << endl;
    } else {
        cout << number << " must be my lucky number!" << endl;
        cout << "Have a nice day!" << endl;
    }

    return 0;
}