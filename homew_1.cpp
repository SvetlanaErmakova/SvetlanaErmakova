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
        CIntN V3;
        int tem1 = 0, tem2=0;
        while (tem1 >= 0)
        {
            try
            {
                cout << "Enter first positive number of " << N << " digits: ";
                cin >> tem1;
                CIntN V1(tem1);

                cout << "Enter second positive number of " << N << " digits: ";
                cin >> tem2;
                CIntN V2(tem2);

                cout << "rez op+ is: ";
                V3 = V1 + V2;
                cout << V3.Value() << '\n';

                //если op+ будет неверно до op- не дойдет, можно на 2 разбить
                cout << "rez op- is: ";
                V3 = V1 - V2;
                cout << V3.Value() << '\n';
            }
            catch (...) { cout << "\nincorrect for this class" << endl; }
        }
        return 0;
    }
}

