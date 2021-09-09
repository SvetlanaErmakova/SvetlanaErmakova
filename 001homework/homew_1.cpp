#include <iostream>
#include "CIntN.hpp"
using namespace std;

int main()
{
    CIntN V2, V3;
    try
    {
        CIntN V = CIntN(115);
        V3 = V + V2;
        cout << "rez op+ is ";
        V3.Value_check();

        V3 = V - V2;
        cout << "rez op- is ";
        V3.Value_check();
    }
    catch (...){cout << "incorrect for this class" << endl; return 0; }

    return 0;
}

