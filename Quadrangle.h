#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
public:
	Quadrangle();

	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
protected:
	std::string get_sides();
	std::string get_corn();
	std::string print_info_2() override;


	int a = 0, b = 0, c = 0, d = 0;
	int A = 0, B = 0, C = 0, D = 0;
};