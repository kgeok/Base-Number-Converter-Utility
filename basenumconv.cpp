//version 0.2

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

void dec2oct(unsigned long int i){

    int d = fabs(i);

    base = (log(d)/log(8));
    int buffer[base];
    //converting base 10 to base 8
    //We do that by contsantly dividing the input by 8 until we can no longer do so

    for (int l = 0; l <= base; l++){

        buffer[l] = d % 8;
        d = d / 8;   
        //we have a buffer to temporary store the number, then we are going to pour the contents in reverse
    }

    for (int w = 0; w<=base; w++){

     cout << buffer[base-w]; 

    }
    cout << "" << endl;
}

int main(int argc, char *argv[])
{

char* argu = argv[1];


    if (argc < 3){
        cout << "Error, no input provided, please input a non-negative decimal number" << endl;
    }
    if (argc > 3){
        cout << "Error, no input provided, please input a non-negative decimal number" << endl;
    }

    int input = atoi(argv[2]);

    if  (!strcmp(argu, "-o")){

        dec2oct(input);
    }

    if  (!strcmp(argu, "-b")){

        dec2bin(input);
    }

    return 0;
}