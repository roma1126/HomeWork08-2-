#include "Quadrangle.h"
#include "Exception.h"


Quadrangle::Quadrangle() { };

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{

	if ((A + B + C + D) != 360)
	{
		std::string ex_error = "���������������: (������� " + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + ", " + std::to_string(d) + "; ���� " +
			std::to_string(A) + ", " + std::to_string(B) + ", " + std::to_string(C) + ", " + std::to_string(D) + ")" +
			" �� ��� ������. �������: ����� ����� �� ����� 360 " + "\n";
		throw Exception(ex_error);
	}
	else
	{
		this->a = a; this->b = b; this->c = c; this->d = d;
		this->A = A; this->B = B; this->C = C; this->D = D;
		this->name = "���������������:";
		this->sides_count = 4;
	}

}

std::string Quadrangle::get_sides()
{
	std::string str = { "�������: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) + "\n" };
	return str;
}
std::string Quadrangle::get_corn()
{
	std::string str = { "����: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D) + "\n" };
	return str;
}
std::string Quadrangle::print_info_2()
{
	std::string q;
	return q = name + " (������� " + std::to_string(a) + ", " + std::to_string(b) + ", " + std::to_string(c) + ", " + std::to_string(d) + "; ���� " +
		std::to_string(A) + ", " + std::to_string(B) + ", " + std::to_string(C) + ", " + std::to_string(D) + ")" + " ������ " + "\n";

}