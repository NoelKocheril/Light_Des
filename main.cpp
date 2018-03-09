#include <iostream>
#include <bitset>
#include <fstream>
#include <limits>

using namespace std;

void pause(){
    cout << "Press Enter to Continue....";
    cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

int main(int argc, char* argv[]) {
//    pause();
    unsigned  int dec;
    do {
        if(cin.fail()) {
            cin.clear();
            cin.ignore(256, '\n');
        }

        cout << "Enter a Decimal: ";
        cin >> dec;

        if (cin.fail() || dec < 0 || dec >= 512)
        {
            cout << "ERROR: \"dec\" must be a number and between 0 and 511 (INCLUSIVE)." << endl << endl;
        }
    } while(dec >= 512 || dec < 0 || cin.fail());

    bitset<9> key (dec);
    cout << key << endl;
    bitset<8> roundKey;
    for(int i = 0; i < 9;i++){
        cout << i << ": " << key[i] << endl;
        for(int j = 0; j < 8;j++) roundKey[j] = key[(i+j)%9];
        cout << roundKey << endl;
    }
    return 0;
}

