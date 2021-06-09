/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int countPositiveValues(int m, int n);
int countNegativeValues(int m, int n);
int countValues(int m, int n);

int main( void )
{

    int m = 0;
    int n = 0;

    while(n >= -10000 && n <=1000)
    {
        cin >> m;
        cin >> n;

        int value = countValues(m, n);

        cout << value << "\n";
    }

    return 0;
}

int countPositiveValues(int m, int n)
{
    int value = 0;
    for(int index = m; index < m + n; index++){
        value += index;
    }

    return value;
}

int countNegativeValues(int m, int n)
{
    int value = 0;

    for(int index = m; index > m + n; index--){
        value += index;
    }

    return value;
}

int countValues(int m, int n)
{
    if(n == 0) return m;

    return n > 0 ? countPositiveValues(m, n) : countNegativeValues(m, n);
}
