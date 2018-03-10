//
// Created by noelk on 3/9/2018.
//
#include <iostream>
#include <fstream>
#define BLK_SIZE 12
using namespace std;
char buffer[BLK_SIZE];
int main(int argc, char *argv[]){
    if(argc <= 1) {
        printf("usage: .\%s filename\n",argv[0]);
        return -1;
    }
    ifstream myFile(argv[1], ios::in | ios::binary);
    if(!myFile){
        //ERROR//
        printf("file '%s' does not exist", argv[1]);
        return -2;
    }
    myFile.read(buffer,12);
    cout << buffer << endl;
    myFile.close();
    return 0;
}
