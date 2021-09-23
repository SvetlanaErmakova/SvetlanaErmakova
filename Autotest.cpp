#include <iostream>
#include "CVector.hpp"
#include "Autotest.hpp"

using namespace std;

int Autotest1()
{
    int f = 0;

    CVector V1;
    V1.add_elt(9);

    CVector V2;
    V2.add_elt(3);

    CVector v;
    v = V1 + V2;
    if (v[0]==12)
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

    CVector V1;
    V1.add_elt(9);

    CVector V2;
    V2.add_elt(3);

    CVector v;
    v = V1 - V2;
    if (v[0] == 6)
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

int Autotest3()
{
    int f = 0;

    CVector V1;
    V1.add_elt(9);

    CVector V2;
    V2.add_elt(3);

    CVector v;
    v = V1*V2;
    if (v[0] == 27)
    {
        f = 1;
        cout << "Test 3 passed...\n";
    }
    else
    {
        cout << "Test 3 failed!\n";
        f = 0;
    }

    return f;
}


int Autotest()
{
    if (Autotest1() * Autotest2()* Autotest3() == 1)
        return 1;
    else
        return 0;
}

