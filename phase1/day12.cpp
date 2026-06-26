#include <iostream>
using namespace std;

int main() {

    int motors[5];

    motors[0] = 5;
    motors[1] = 10;
    motors[2] = 15;
    motors[3] = 20;
    motors[4] = 25;

    cout << "Current motorspeed = 0" << endl;
    for(int i=0; i<=4; i++) {

        cout << "Motorspeed increasing by 5 RPM" << endl;
        cout << "Current motorspeed = " << motors[i] << " RPM" << endl;
    }
    cout << "MAX SPEED REACHED (25 RPM)" << endl;
}