#pragma once
#include <string>
#include <stdexcept>

class Exception :public std::runtime_error
{
public:

	Exception(const std::string& message);

};