#pragma once
#include "B.h"

class D3 : private B
{
private:
	int d3;
public:
	D3(int, int);
	~D3();

	void show_D3();
};

