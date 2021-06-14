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

bool checkExistence(const Ponto &IE, const Ponto &SD)
{
    bool status = true;

    std::pair<int, int>rangeX = {IE.x, SD.x};
    std::pair<int, int>rangeY = {IE.y, SD.y};

    if(rangeX.first - rangeX.second != 0 || rangeY.first - rangeY.second != 0) status = false; 

        
    return status;
}


int main(void)
{
    int x1;
    int y1;

    int x2;
    int y2;

    int x3;
    int y3;

    while(cin >> std::ws >> x1 && cin >> std::ws >> y1)
    {
        cin >> x2;
        cin >> y2;
        cin >> x3;
        cin >> y3;        

        Ponto IE = Ponto(x1, y1);
        Ponto SD = Ponto(x2, y2);
        Ponto P = Ponto(x3, y3);

        bool exists = checkExistence(IE, SD);

        if(!exists) {
            cout << 3 << "\n";
            return 0;
        }

        //
        cout << pt_in_rect(IE, SD, P) << "\n";
    }

    return 0;
}
