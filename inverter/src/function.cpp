#include "function.h"

#include <iterator>
using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    for(int index = 0; index < SIZE; index++)
    {
        if(index + 1 < SIZE)
        {
            std::swap(arr[index], arr[index + 1]);
        }
    }
}
