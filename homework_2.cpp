#include <iostream>
#include "CVector.hpp"
#include "Autotest.hpp"
using namespace std;

int main()
{
    if (Autotest() !=1)
    {
        cout << "Error! Tests not passed!\n";
    }
    else
    {
        size_t S1, S2;
        int temp = 1;
        double elt;
        try 
        {
            cout << "Enter the size of the first vector: ";
            cin >> S1;
            CVector V1(S1);

            cout << "Enter the size of the second vector: ";
            cin >> S2;
            CVector V2(S2);

            //изменить вектора
            while (temp != 0)
            {
                cout << "\nEnlarge vector1 ? (1-yes, 0-no): ";
                cin >> temp;
                if (temp == 0)
                    break;
                cout << "Enter elt: ";
                cin >> elt;
                V1.add_elt(elt);
            }
            temp = 1;
            while (temp != 0)
            {
                cout << "\nEnlarge vector2 ? (1-yes, 0-no): ";
                cin >> temp;
                if (temp == 0)
                    break;
                cout << "Enter elt: ";
                cin >> elt;
                V2.add_elt(elt);
            }

            cout << "So your vectors are: \n";
            V1.print_vec();
            V2.print_vec();

            cout << "\noperator+ result: ";
            CVector v00;
            v00=V1 + V2;
            v00.print_vec();

            cout << "\noperator- result: ";
            CVector v01;
            v01 = V1 - V2;
            v01.print_vec();

            cout << "\noperator* result: ";
            CVector v02;
            v02 = V1* V2;
            v02.print_vec();

        }
        catch(...) { cout << "\nincorrect for this class" << endl; }
    }
    return 0;
}
