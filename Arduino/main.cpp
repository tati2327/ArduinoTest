#include <iostream>
#include <stdio.h>
#include <unistd.h>

using namespace std;

int main(){
    FILE *file;
    //Opening device file

    int getnum = 1;
    int i = 0;
    while ( i < 5){
        file = fopen("/dev/ttyACM1", "w");
        //cout << ">>" << endl;
        //cin >> getnum;
        //sleep(10);
        sleep(2);
        fprintf(file, "%d", getnum); //Writing to the file
        fclose(file);
        getnum++;
        i++;
    }
}
#pragma clang diagnostic pop