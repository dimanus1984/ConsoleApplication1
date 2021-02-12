#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string sum(string x, string y)
{
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '.' || x[i] == ',')
        {
            float x1 = stof(x);
            float x2 = stof(y);
            return to_string(x1 + x2);
        }
    }

    int x1 = stoi(x);
    int x2 = stoi(y);
    return to_string(x1 + x2);               
}

int main()
{
    cout << sum("5,5","5,5");
}

