#include <iostream>
#include <sstream>
#include <map>

using namespace std;
int main()
{
    map<string, int> monthNames{
        {"Jan", 1},
        {"Feb", 2},
        {"Mar", 3},
        {"Apr", 4},
        {"May", 5},
        {"Jun", 6},
        {"Jul", 7},
        {"Aug", 8},
        {"Sep", 9},
        {"Oct", 10},
        {"Nov", 11},
        {"Dec", 12}};

    const char *stratTime = "Thu Mar 17 15:14:57 2022";
    char day[50], month[50], throwaway[50];
    int dd, year;
    stringstream dateStream(stratTime);

    dateStream >> day >> month >> dd >> throwaway >> year;

    int monthNumber = monthNames.find(month)->second;

    cout << monthNumber << " " << dd << " " << year;

    return 0;
}
