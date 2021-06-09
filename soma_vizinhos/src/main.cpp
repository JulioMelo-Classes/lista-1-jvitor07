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
    while(true)
    {
        int m;
        int n;

        cin >> m;
        cin >> n;

        int value = countValues(m, n);

        cout << value << "\n";

        if(n == 0) break;
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
