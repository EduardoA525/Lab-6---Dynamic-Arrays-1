/*
Write a function sumArray() that receives a dynamic double array and both calculates and returns its sum.
There is no output in this function.

Pass the array to the three functions to populate, output, and sum the array.

Use pointer notation over array notation for this assignment.
*/

//Eduardo Avila
//COMSC - 210 - 5293
//Lab 6 - Dynamic Arrays and Functions 1

#include <iostream>

using namespace std;

//Size for array
const int MAX_SIZE = 5;

//Prototypes
void enterArrayData(double *infoArray, int size);
void outputArrayData(double *infoArray, int size);
double sumArray(double *infoArray, int size)

int main(){

    //Creates array of doubles with size 5
    double *infoArray = new double[MAX_SIZE];

    //Calls functions
    enterArrayData(infoArray, MAX_SIZE);
    outputArrayData(infoArray, MAX_SIZE);

    double sum = sumArray(infoArray, MAX_SIZE);
    //Output for the epic sum of the array
    cout << "Sum of all values: " << sum << endl;

    return 0;
}

//Definitions
//Entering data
void enterArrayData(double *infoArray, int size){

    cout << "Data entry for the array: " << endl;

    //Loop to input each item in the array
    for(int i = 0; i < size; i++){
        
        cout << " > Element #" << i << ": ";
        //As i goes up, so does the item slot
        cin >> *(infoArray + i);
    }

    cout << "Data entry complete." << endl;
}

//Outputting array
void outputArrayData(double *infoArray, int size){
    
    cout << "Outputting array elements: ";

    //Loops to output each element
    for (int i = 0; i < size; i++){

        //Same idea for first function
        cout << *(infoArray + i) << ", ";
    }
}

//Sums it up. No output in this function. Must return sum
double sumArray(double *infoArray, int size){

    double sum = 0;

    for (int i = 0; i < size; i++){

        //Same concept except it keeps adding up all elements
        //as it goes down the list
        sum += *(infoArray + i);
    }

    return sum;
}