#include <iostream>
#include <climits>

using std::cout;
using std::endl;
using std::numeric_limits;

template <typename T>
constexpr T my_pow(T base, unsigned int exp)
{
	T result = 1;
	if (base == 2) {
		result <<= exp;
	}
	else {
		for (unsigned int i = 0; i < exp; i++)
		{
			result *= base;
		}
	}
	return result;
}
static_assert(my_pow<uint8_t>(2, 7) == 128, "8-bit power failed");
static_assert(my_pow<uint16_t>(2, 7) == 128, "16-bit power failed");
static_assert(my_pow<uint32_t>(2, 7) == 128, "32-bit power failed");
static_assert(my_pow<uint64_t>(2, 7) == 128, "64-bit power failed");
static_assert(my_pow<uint32_t>(10, 3) == 1000, "Base-10 power failed");

void ch4()
{

	cout << "CH 4 is here! Even in C++" << endl;

	int8_t my_char;
	my_char = my_pow<int8_t>(2, 6) - 1;
	my_char += my_pow<int8_t>(2, 6);
	cout << "My Char value:\n" << static_cast<int>(my_char) << endl;
	if (my_char == numeric_limits<int8_t>::max())
	{
		cout << "LIMIT!" << endl;
	}
	my_char++;
	cout << "And if I add one more:\n" << static_cast<int>(my_char) << endl;

	int16_t my_int;
	my_int = my_pow<int16_t>(2, 14) - 1;
	my_int += my_pow<int16_t>(2, 14);
	cout << "My int value:\n" << my_int << endl;
	if (my_int == numeric_limits<int16_t>::max())
	{
		cout << "LIMIT!" << endl;
	}
	my_int++;
	cout << "And if I add one more:\n" << my_int << endl;

	int32_t my_long;
	my_long = my_pow<int32_t>(2, 30) - 1;
	my_long += my_pow<int32_t>(2, 30);
	cout << "My long value:\n" << my_long << endl;
	if (my_long == numeric_limits<int32_t>::max())
	{
		cout << "LIMIT!" << endl;
	}
	my_long++;
	cout << "And if I add one more:\n" << my_long << endl;

	int64_t my_long_long;
	my_long_long = my_pow<int64_t>(2, 62) - 1;
	my_long_long += my_pow<int64_t>(2, 62);
	cout << "My long long value:\n" << my_long_long << endl;
	if (my_long_long == numeric_limits<int64_t>::max())
	{
		cout << "LIMIT!" << endl;
	}
	my_long_long++;
	cout << "And if I add one more:\n" << my_long_long << endl;
	// and now, unsigned
	
	uint8_t my_uchar;
	my_uchar = my_pow<uint8_t>(2, 7) - 1;
	my_uchar += my_pow<uint8_t>(2, 7);
	cout << "My unsigned char value:\n" << static_cast<unsigned int>(my_uchar) << endl;
	if (my_uchar == numeric_limits<uint8_t>::max())
	{
		cout << "LIMIT!" << endl;
	}
	my_uchar++;
	cout << "And if I add one more:\n" << static_cast<unsigned int>(my_uchar) << endl;

	uint16_t my_uint;
	my_uint = my_pow<uint16_t>(2, 15) - 1;
	my_uint += my_pow<uint16_t>(2, 15);
	cout << "My unsigned int value:\n" << my_uint << endl;
	if (my_uint == numeric_limits<uint16_t>::max())
	{
		cout << "LIMIT!" << endl;
	}
	my_uint++;
	cout << "And if I add one more:\n" << my_uint << endl;

	uint32_t my_ulong;
	my_ulong = my_pow<uint32_t>(2, 31) - 1;
	my_ulong += my_pow<uint32_t>(2, 31);
	cout << "My unsigned long value:\n" << my_ulong << endl;
	if (my_ulong == numeric_limits<uint32_t>::max())
	{
		cout << "LIMIT!" << endl;
	}
	my_ulong++;
	cout << "And if I add one more:\n" << my_ulong << endl;

	uint64_t my_ulong_long;
	my_ulong_long = my_pow<uint64_t>(2, 63) - 1;
	my_ulong_long += my_pow<uint64_t>(2, 63);
	cout << "My unsigned long long value:\n" << my_ulong_long << endl;
	if (my_ulong_long == numeric_limits<uint64_t>::max())
	{
		cout << "LIMIT!" << endl;
	}
	my_ulong_long++;
	cout << "And if I add one more:\n" << my_ulong_long << endl;
}