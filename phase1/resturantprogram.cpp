#include <iostream>
using namespace std;

int main() {

    cout << "Time to pick your Resturant!" << endl;
    cout << "Type 1 for McDonalds, 2 for Wendy's, and 3 for Chick-fil-a!" << endl;
    int resturant;
    cin >> resturant;
    switch (resturant) {
    case 1:
        cout << "McDonalds it is!!!" << endl;
        break;
    case 2:
        cout << "Wendy's it is!!!" << endl;
        break;
    case 3:
        cout << "Chick-fil-a it is!!!" << endl;
        break;
    default:
        cout << "Thats not an option." << endl;
    }
    return 0;
}