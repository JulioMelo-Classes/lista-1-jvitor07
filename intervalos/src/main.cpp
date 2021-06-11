/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

int countValuesInInterval(std::vector<int>values, std::pair<int, int>interval);
double calcPercentage(int quantity, double total);
void printPercentages(std::vector<double>percentages);

int main(void)
{
    int value;
    double total;

    std::vector<int> values;    
    std::vector<double> percentages;

    while (cin >> std::ws >> value)
    {
        values.push_back(value);
    }

    total = values.size();

    percentages.push_back(calcPercentage(countValuesInInterval(values, {0, 24}), total));
    percentages.push_back(calcPercentage(countValuesInInterval(values, {25, 49}), total));
    percentages.push_back(calcPercentage(countValuesInInterval(values, {50, 74}), total));
    percentages.push_back(calcPercentage(countValuesInInterval(values, {75, 99}), total));
    percentages.push_back(calcPercentage(countValuesInInterval(values, {100, 1000}), total));

    printPercentages(percentages);

    return 0;
}

int countValuesInInterval(std::vector<int>values, std::pair<int, int>interval)
{
    int counter = 0;
    for(int index = 0; index < values.size(); index++)
    {
        if(interval.first == 100){
            if(values[index] < 0 ||values[index] >= interval.first) counter++;
        }else{
            if(values[index] >= interval.first && values[index] <= interval.second) counter++;
        }

    }

    return counter;
}

double calcPercentage(int quantity, double total)
{
    return (quantity / total) * 100;
}

void printPercentages(std::vector<double>percentages)
{
    for(int index = 0; index < percentages.size(); index++)
    {
        cout << std::setprecision(4) << percentages[index] << "\n";
    }
}