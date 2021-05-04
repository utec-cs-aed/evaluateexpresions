#include <iostream>
#include <iomanip>
#include "solution.h"

using namespace std;


int main(int argc, char const *argv[])
{
    try
    {
        string input = argv[1];
        float res = evaluate(input);
        cout << fixed << setprecision(2) << res << endl;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
}