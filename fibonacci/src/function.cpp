#include "function.h"
/*
blz
*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int>fiboArray;

    if(n == 1) return fiboArray;

    int valOne = 1;
    int valTwo = 1;

    fiboArray.push_back(valOne);
    fiboArray.push_back(valTwo);

    while(true)
    {
        int sum = valOne + valTwo;

        if(sum >= n) break;

        fiboArray.push_back(sum);

        valOne = valTwo;
        valTwo = sum;
    }

    return fiboArray;
}
