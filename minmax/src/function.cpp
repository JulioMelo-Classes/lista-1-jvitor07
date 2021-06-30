#include "function.h"
#include <cstddef>

std::pair<int, int>getMin(int values[], std::size_t n)
{
    int minIndex = 0;
    int minValue = values[minIndex];

    for(int index = 0; index < n; index++)
    {
        if(values[index] < values[minIndex]) {
            minIndex = index;
            minValue = values[index];
        }
    }

    return std::pair<int, int>{minIndex, minValue};
}

std::pair<int, int>getMax(int values[], std::size_t n)
{
    int maxIndex = n - 1;
    int maxValue = values[maxIndex];

    for(int index = 0; index < n; index++)
    {
        if(values[index] >= values[maxIndex]) {
            maxIndex = index;
            maxValue = values[index];
        }
    }

    return std::pair<int, int>{maxIndex, maxValue};
}

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

/*
ok
tive que usar std::size_t mas blz
*/
std::pair<int,int> min_max( int V[], std::size_t n )
{
    if(n == 0) return std::pair<int, int>{-1, -1};

    std::pair<int, int>minPair = getMin(V, n);
    std::pair<int, int>maxPair = getMax(V, n);

    return std::pair<int, int>{minPair.first, maxPair.first};
}
