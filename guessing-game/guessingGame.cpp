#include <iostream>
using namespace std;

int main() {

    float hostUserNum, guestUserNum;
    cout << "Host: " << endl;
    cin >> hostUserNum;

    system("cls");

    cout << "Guest: " << endl;
    cin >> guestUserNum;

    cout << ((hostUserNum == guestUserNum) ? "Correct!" : "Failed!") << endl;

    /*
    
    if(hostUserNum == guestUserNum) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Failed" << endl;
    }
    
    */

}