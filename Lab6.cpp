/*
Write a C++ function enterArrayData() that receives a dynamic double array and 
populates it with values that the user enters via the console.

Write a function outputArrayData() that receives a dynamic double array and 
outputs its contents on one line.

Write a function sumArray() that receives a dynamic double array and both calculates and returns its sum.
There is no output in this function.

In main(), using dynamic memory allocation, create an array of doubles of size 5. 
Use a constant for this integer literal. 
Pass the array to the three functions to populate, output, and sum the array.

Use pointer notation over array notation for this assignment.
*/

//Eduardo Avila
//COMSC - 210 - 5293
//Lab 6 - Dynamic Arrays and Functions 1

#include <iostream>

using namespace std;

//Size for array of doubles
const int MAX_SIZE = 5;

//Prototypes

void enterArrayData(double *infoArray, int size);
//outputArrayData()
//sumArray()

int main(){

    //Creates array of doubles with size 5
    double *infoArray = new double[MAX_SIZE];

    return 0;
}


//Definitions
void enterArrayData(double *infoArray, int size){

    cout << "Data entry for the array: " << endl;

    //Loop to input each item in the array
    for(int i = 0; i < size; i++){

    }

    cout << "Data entry complete." << endl;
}