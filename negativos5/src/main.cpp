#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int *getValues(int length); 
int countNegatives(int length, int* values);
/*
ok
*/
int main(void)
{
    int* values = getValues(SIZE);

    int counter = countNegatives(SIZE, values);

    cout << counter << "\n";

    return 0;
}

int* getValues(int length){
    int *values = new int[length];

    for(int index = 0; index < length; index++){
        cin >> values[index];
    }

    return values;
}

int countNegatives(int length, int* values){
    int counter = 0;

    for(int index = 0; index < length; index++){
        if(values[index] < 0) counter++;
    }

    return counter;
}