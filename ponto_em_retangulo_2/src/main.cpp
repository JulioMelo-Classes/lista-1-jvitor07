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
/*
blz
*/
int main(void)
{
    std::pair<int, int>cordOne;
    std::pair<int, int>cordTwo;
    std::pair<int, int>cordThree;

    while(cin >> std::ws >> cordOne.first && cin >> std::ws >> cordOne.second)
    {
        cin >> cordTwo.first;
        cin >> cordTwo.second;

        cin >> cordThree.first;
        cin >> cordThree.second;

        Ponto IE{cordOne.first, cordOne.second};
        Ponto SD{cordTwo.first, cordTwo.second};
        Ponto P{cordThree.first, cordThree.second};

        
        bool exists = checkExistence(IE, SD); //poderia usar exists direto no if, tipo if(checkExistence(IE, SD)) ...

        if(exists) cout << respondWithStatus(pt_in_rect(IE, SD, P)) << "\n";
    }

    return 0;
}