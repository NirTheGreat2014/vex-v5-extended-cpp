#include <iostream>
using namespace std;

int main() {
    float num;

    cout << "Please type in a number: ";
    cin >> num;

    cout << "Integer part: " << int(num) << endl;
    cout << "Decimal part: " << num - int(num) << endl;

    return 0;
}