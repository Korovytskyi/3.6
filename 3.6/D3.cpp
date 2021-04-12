#include "D3.h"

D3::D3(int d3 = 0, int b = 0) : B(b) { this->d3 = d3; }
D3::~D3() {}

void D3::show_D3()
{
	cout << "Class D3" << endl;
	show_B();
	cout << "show_D3()" << endl;
	cout << "D3::d3 = " << d3 << endl;
}