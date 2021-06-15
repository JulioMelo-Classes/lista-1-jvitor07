#include "function.h"

bool checkExistence(const Ponto &IE, const Ponto &SD)
{
    bool status = false;

    std::pair<int, int>rangeX = {IE.x, SD.x};
    std::pair<int, int>rangeY = {IE.y, SD.y};

    if(rangeX.first - rangeX.second != 0 || rangeY.first - rangeY.second != 0) status = true; 

            
    return status;
}

bool checkBorder(const Ponto &IE, const Ponto &SD, const Ponto &P)
{
    bool status = false;

    std::pair<int, int>rangeX = {IE.x, SD.x};
    std::pair<int, int>rangeY = {IE.y, SD.y};

    for(int indexOne = rangeX.first; indexOne <= rangeX.second; indexOne++)
    {
        if(P.x == indexOne && (P.y == rangeY.first || P.y == rangeY.second)) status = true;
    }

    for(int indexTwo = rangeY.first; indexTwo <= rangeY.second; indexTwo++)
    {
        if(P.y == indexTwo && (P.x == rangeX.first || P.x == rangeX.second)) status = true;
    }

    return status;
}

bool checkInside(const Ponto &IE, const Ponto &SD, const Ponto &P)
{
    bool status = false;

    std::pair<int, int>rangeX = {IE.x, SD.x};
    std::pair<int, int>rangeY = {IE.y, SD.y};

    for(int indexOne = rangeX.first + 1; indexOne < rangeX.second; indexOne++)
    {
        for(int indexTwo = rangeY.first + 1; indexTwo < rangeY.second; indexTwo++)
        {
            if((P.x == indexOne) && (P.y == indexTwo)) status = true;
        }
    }

    return status;
}

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    if(checkBorder(IE, SD, P)) return location_t::BORDER;
    if(checkInside(IE, SD, P)) return location_t::INSIDE;

    return location_t::OUTSIDE;
}

string respondWithStatus(int status)
{
    if(status == 0) return "inside";
    if(status == 1) return "border";
    if(status == 2) return "outside";

    return "invalid";
}