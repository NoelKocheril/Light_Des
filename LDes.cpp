//
// Created by noelk on 4/3/2018.
//

#include "LDes.h"
#include <iostream>
using namespace std;

int S1[2][8] = {{5,2,1,6,3,4,7,0},{1,4,6,2,0,7,5,3}};
int S2[2][8] = {{4,0,6,5,7,1,3,2},{5,3,0,7,6,2,1,4}};

int a;
bitset<3> s, t;

int main(int argc, char * argv[]) {
    for(int j = 0; j < 2;j++) {
        for (int i = 0; i < 8; i++)
            cout << "S1[" << j << "][" << i << "]: " << bitset<3>(S1[j][i]) << endl;
        cout << endl;
    }
    for(int j = 0; j < 2;j++) {
        for (int i = 0; i < 8; i++)
            cout << "S2[" << j << "][" << i << "]: " << bitset<3>(S2[j][i]) << endl;

        cout << endl;
    }
    cout << sizeof(S1)/sizeof(int) << endl << endl;
    s = bitset<3>(S2[1][3]);
    t = bitset<3>(S2[0][3]);
    printf("s: %d\n",s);
    printf("t: %d\n",t);
    printf("s=s^t\n");
    s^=t;
    printf("s: %d\n",s);
    return 0;
}
