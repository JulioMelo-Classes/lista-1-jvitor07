//#include "function.h"

#include <iterator>
using std::iter_swap;
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*
 vou considerar 10% pelo uso da std::swap mesmo não resolvendo corretamente
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    for(int index = 0; index < SIZE; index++) //não funcionou muito bem o principal erro é que vc tá trocando elementos que vem depois com os que vem antes.
    {
        if(index + 1 < SIZE)
        {
            std::swap(arr[index], arr[index + 1]);
        }
    }
}
