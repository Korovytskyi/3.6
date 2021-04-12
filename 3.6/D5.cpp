#include "D5.h"

D5::D5(int d5 = 0, int d2 = 0, int d3 = 0, int b = 0) : D3(d3, b), D2(d3, b) { this->d5 = d5; }
D5::~D5() {}

void D5::show_D5()
{
	cout << "Class D5" << endl;
	show_D2();
	show_D3();
	
	cout << "show_D5()" << endl;
	cout << "D5::d5 = " << d5 << endl;
}
