//version 0.3

#include <iostream>
#include <string.h>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;

int base;
int bin;

void oct2oct(unsigned long int i){
    cout << i;
}
void bin2bin(unsigned long int i){
    cout << i;
}
void bin2oct(unsigned long int i){
    cout << i;
}

void bin2dec(unsigned long int i){

int d = fabs(i);
int result = 0;

const int base = (log(d)/log(10));

int buffer[base];

for (int l=0; l<=base; l++){

double p = l;

buffer[l] = (d / pow(10.0, p));
buffer[l] = buffer[l] % 10;

}

for (int y = 0; y <= base; y++) {

	buffer[y] = buffer[y] * pow(2.0, y);	

}

    for (int w = 0; w<=base; w++){

     buffer[base] = buffer[base-w]; 
        

    }
    cout << "" << endl;

for (int q = 0; q <= base; q++) {

	result += buffer[q];

}

cout << result;
cout << "" << endl;

}

void dec2bin(unsigned long int i){

    int d = fabs(i);

    const int base = (log(d)/log(2));
    int buffer[base]; //uninitlized array
    //converting base 10 to base 2
    //We do that by contsantly dividing the input by 2 until we can no longer do so

    for (int l = 0; l <= base; l++){ //Filling the null array with values

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

    const int base = (log(d)/log(8));
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

void dec2dec(unsigned long int i){
    cout << i;
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

    if  (!strcmp(argu, "-do")){

        dec2oct(input);
    }

    if  (!strcmp(argu, "-db")){

        dec2bin(input);
    }

	if (!strcmp(argu, "-bd")) {

		bin2dec(input);
	}

    if (!strcmp(argu, "-bb")) {

		bin2bin(input);
	}

    if (!strcmp(argu, "-dd")) {

		dec2dec(input);
	}

    if (!strcmp(argu, "-oo")) {

		oct2oct(input);
	}

    return 0;
}