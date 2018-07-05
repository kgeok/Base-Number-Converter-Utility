//version 0.1

#include <iostream>
#include <string.h>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;

int base;
int bin;

void dec2bin(unsigned long int i){

    int d = fabs(i);

    base = (log(d)/log(2));
    int buffer[base];
    //converting base 10 to base 2
    //We do that by contsantly dividing the input by 2 until we can no longer do so

    for (int l = 0; l <= base; l++){

        buffer[l] = d % 2;
        d = d / 2;   
        //we have a buffer to temporary store the number, then we are going to pour the contents in reverse
    }

    for (int w = 0; w<=base; w++){

     cout << buffer[base-w]; 

    }
    cout << "" << endl;
}

int main(int argc, char *argv[])
{

    if (argc < 2){
        cout << "Error, no input provided, please input a non-negative decimal number" << endl;
    }

    int input = atoi(argv[1]);

    dec2bin(input);

    return 0;
}