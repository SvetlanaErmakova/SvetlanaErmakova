#include <iostream>
#include "CIntN.hpp"
#include "Autotest.hpp"

using namespace std;

int Autotest1()
{
    int f = 0;

    CIntN V1 = CIntN(115);
    CIntN V2 = CIntN(111);
    CIntN V3 = V1 + V2;

    if (V3.Value() == 226)
    {
        f = 1;
        cout << "Test 1 passed...\n";
    }
    else
    {
       cout << "Test 1 failed!\n";
        f = 0;
    }

    return f;
}

int Autotest2()
{
    int f = 0;

    CIntN V1 = CIntN(456);
    CIntN V2 = CIntN(111);
    CIntN V3 = V1 - V2;

    if (V3.Value() == 345)
    {
        f = 1;
        cout << "Test 2 passed...\n";
    }
    else
    {
        cout << "Test 2 failed!\n";
        f = 0;
    }

    return f;
}
int Autotest()
{
    if (Autotest1() * Autotest2() == 1)
        return 1;
    else
        return 0;
}