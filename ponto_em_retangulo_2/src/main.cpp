/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"


int main(void)
{
    const Ponto IE = Ponto(2, 5);
    const Ponto SD = Ponto(2, 7);
    bool status = checkExistence(IE, SD);

    cout << status << "\n";

    return 0;
}
