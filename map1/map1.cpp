// map1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <map>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    map<string, double>coll{ {"tim", 9.9},
                             {"struppi", 11.77}
                            };

    // square the value of each element:
    for_each(coll.begin(), coll.end(),
        [](pair<const string, double>& elem) {
            elem.second *= elem.second; });

    // print each element:
    for_each(coll.begin(), coll.end(),
        [](const map<string, double>::value_type& elem) {
            cout << elem.first << ": " << elem.second << endl;
        });
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
