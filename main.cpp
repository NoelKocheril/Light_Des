/**
 * Light Des
 * Purpose: Light Des Encryption
 *
 * @author Noel Kocheril
 * @version 1.1 03/09/2018
 */

#include <iostream>
#include <bitset>
#include <fstream>
#include <limits>

using namespace std;

/**
 * Pauses Program until "Enter" Key is pressed
 * @param none
 * @return none
 *
 */
void pause();

bitset<8> **genKeys(int dec);

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
    bitset<8> roundKeys[9];
    for(int i = 0; i < 9;i++){
        //cout << i << ": " << key[i] << endl;
        for(int j = 0; j < 8;j++) roundKeys[i][j] = key[(i+j)%9];
        cout << roundKeys[i] << endl;
    }
//    bitset<8> **Keys;
//    Keys = genKeys(dec);

    return 0;
}

//Waits for User to press enter
void pause(){
    cout << "Press Enter to Continue....";
    cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

//Tries to Generate Key
bitset<8> **genKeys(int dec) {
    return nullptr;
}