#include "Figure.h"


Figure::Figure() { sides_count = 0; this->name = "������:"; }

std::string Figure::print_info_2()
{
	std::string q;
	return q = get_name() + " ������ " + get_sides() + " ������� " + "\n";

}

std::string Figure::get_sides()
{
	return "0";
}
std::string Figure::get_corners()
{
	return " ";
}
int Figure::get_sides_count()
{
	return sides_count;
}

std::string Figure::get_name()
{
	return name;
}