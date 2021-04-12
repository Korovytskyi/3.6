#include <iostream>
#include "D5.h"
#include "D4.h"

int main()
{
    B ob1(1);
    cout << "B ob1(1)" << endl;
    cout << "sizeof(B) = " << sizeof(B) << endl;
    cout << "Hierarchy of class B" << endl;
    ob1.show_B();

    D1 ob2(2, 3);
    cout << "D1 ob2(2, 3)" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << "Hierarchy of class D1" << endl;
    ob2.show_D1();

    D2 ob3(4, 5);
    cout << "D2 ob3(4, 5)" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << "Hierarchy of class D2" << endl;
    ob3.show_D2();

    D3 ob4(7, 8);
    cout << "D3 ob4(6, 7, 8)" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << "Hierarchy of class D3" << endl;
    ob4.show_D3();

    D4 ob5( 10, 11, 12);
    cout << "D4 ob5(10, 11, 12)" << endl;
    cout << "sizeof(D4) = " << sizeof(D4) << endl;
    cout << "Hierarchy of class D4" << endl;
    ob5.show_D4();

    D5 ob6(9 , 10, 11, 12);
    cout << "D5 ob5(9, 10, 11, 12)" << endl;
    cout << "sizeof(D5) = " << sizeof(D5) << endl;
    cout << "Hierarchy of class D5" << endl;
    ob6.show_D5();

    return 0;
}