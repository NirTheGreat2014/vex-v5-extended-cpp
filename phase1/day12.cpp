#include <iostream>
using namespace std;

int main() {

    int motors[5];

    motors[1] = 0;
    motors[2] = 5;
    motors[3] = 10;
    motors[4] = 15;
    motors[5] = 20;

    for(int i=1; i<=5; i++) {

        cout << "Motorspeed increasing by 5 RPM" << endl;
        cout << "Current motorspeed = " << motors[i] << " RPM" << endl;
    }
    cout << "MAX SPEED REACHED (20 RPM)" << endl;
}