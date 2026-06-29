#include <iostream>
#include <string>
using namespace std;

int main() {
    string swc;

    while (true) {
        cout << "Shall we continue? ";
        cin >> swc;

        cout << "hi" << endl;

        if (swc == "no") {
            break;
        }
    }

    cout << "okay then" << endl;

    return 0;
}