#include <iostream>
using namespace std;

int main() {

    cout << "Hiw fast do you want to be! 1 = slow 2 = medium 3 = fast." << endl;
    int speed;
    cin >> speed;
    switch (speed) {
    case 1:
        cout << "You are slow." << endl;
        break;
    case 2:
        cout << "You are medium." << endl;
        break;
    case 3:
        cout << "You are fast!" << endl;
        break;
    default:
        cout << "Thats not an option." << endl;
    }
    return 0;
}