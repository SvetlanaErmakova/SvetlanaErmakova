#include <iostream>
#include "CIntN.hpp"
#include "Autotest.hpp"
using namespace std;

int main()
{
    if (Autotest() != 1)
    {
        cout << "Error! Tests not passed!\n";
    }
    else
    {
        CIntN V2, V3;
        try
        {
            CIntN V = CIntN(33);

            cout << "rez op+ is: ";
            V3 = V + V2;
            cout << V3.Value()<<'\n';

            cout << "rez op- is: ";
            V3 = V - V2;
            cout << V3.Value()<<'\n';
        }
        catch (...) { cout << "\nincorrect for this class" << endl; }

        return 0;
    }
}

