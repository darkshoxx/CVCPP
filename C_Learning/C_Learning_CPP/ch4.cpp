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

	cout << "CH 4 is here! Even in C++";
	int8_t my_char;
	my_char = my_pow<int8_t>(2, 6) - 1;
	my_char += my_pow<int8_t>(2, 6);
	cout << "\nMy Char value:\n" << static_cast<int>(my_char);
	if (my_char == numeric_limits<int8_t>::max())
	{
		cout << "\nLIMIT!";
	}
	my_char++;
	cout << "\nAnd if I add one more:\n" << static_cast<int>(my_char);

}