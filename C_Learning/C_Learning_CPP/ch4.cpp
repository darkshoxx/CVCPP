#include <iostream>

void ch4()
{
	std::cout << "CH 4 is here! Even in C++";
	int my_int;
	short my_short;
	long my_long;
	long long my_long_long;

	unsigned int my_uint;
	unsigned short my_ushort;
	unsigned long my_ulong;
	unsigned long long my_ulong_long;

	my_int = pow(2, 31) - 1;
	my_short = pow(2, 15) - 1;
	my_long = pow(2, 15) - 1;
	my_long_long = pow(2, 63) - 1;
	std::cout << "\nint:\n";
	std::cout << my_int;
	std::cout << "\nshort:\n";
	std::cout << my_short;
	std::cout << "\nlong long:\n";
	std::cout << my_long_long;
}