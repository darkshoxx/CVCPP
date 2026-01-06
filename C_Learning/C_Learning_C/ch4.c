#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <limits.h>

uint64_t my_old_pow(unsigned int base, unsigned int exp) {
	uint64_t result = 1;
	for (size_t i = 0; i < exp; i++)
	{
		result = result * base;
	}
	return result;
}

uint64_t my_pow(unsigned int base, unsigned int exp) {
	uint64_t result = 1;
	if (base == 2) {
		result = result << exp;
	}
	else {
		for (size_t i = 0; i < exp; i++)
		{
			result = result * base;
		}
	}
	return result;
}

void ch4(void)
{
	printf("CH 4 is here! Even in C!");

	int16_t my_int;
	my_int = (int16_t)(my_pow(2, 15) - 1);
	printf("\nMy integer value \n%" PRId16, my_int);
	if (INT16_MAX == my_int)  // more consistent than SHRT_MAX 
	{
		printf("\n Identical to limit");
	}
	my_int += 1;
	printf("\nAnd if I add one more: \n%" PRId16, my_int);

	int8_t my_char;
	my_char = (int8_t)(my_pow(2, 7) - 1);
	printf("\nMy char value \n%" PRId8, my_char);
	if (INT8_MAX == my_char)  // more consistent than SCHAR_MAX 
	{
		printf("\n Identical to limit");
	}
	my_char += 1;
	printf("\nAnd if I add one more: \n%" PRId8, my_char);

	int32_t my_long;
	my_long = (int32_t)(my_pow(2, 31) - 1);
	printf("\nMy long value \n%" PRId32, my_long);
	if (INT32_MAX == my_long)  // more consistent than LONG_MAX 
	{
		printf("\n Identical to limit");
	}
	my_long += 1;
	printf("\nAnd if I add one more: \n%" PRId32, my_long);

	int64_t my_long_long;
	my_long_long = (int64_t)(my_pow(2, 63) - 1);
	printf("\nMy long long value \n%" PRId64, my_long_long);

	if (INT64_MAX == my_long_long)  // more consistent than LLONG_MAX 
	{
		printf("\n Identical to limit");
	}
	my_long_long += 1;
	printf("\nAnd if I add one more: \n%" PRId64, my_long_long);

	uint16_t my_uint;
	my_uint = (uint16_t)(my_pow(2, 16) - 1);
	printf("\nMy unsigned int value:\n%" PRIu16, my_uint);
	if (UINT16_MAX == my_uint)  // more consistent than USHRT_MAX 
	{
		printf("\nIDENTICAL TO LIMIT");
	}
	my_uint++;
	printf("\nAnd if we add one more: \n%" PRIu16, my_uint);
	
	uint8_t my_uchar;
	my_uchar = (uint8_t)(my_pow(2, 8) - 1);
	printf("\nMy unsigned char value:\n%" PRIu8, my_uchar);
	if (UINT8_MAX == my_uchar)  // more consistent than UCHAR_MAX 
	{
		printf("\nIDENTICAL TO LIMIT");
	}
	my_uchar++;
	printf("\nAnd if we add one more:\n%" PRIu8, my_uchar);

	uint32_t my_ulong;
	my_ulong = (uint32_t)(my_pow(2, 32) - 1);
	printf("\nMy unsigned long value:\n%" PRIu32, my_ulong);
	if (UINT32_MAX == my_ulong)  // more consistent than ULONG_MAX 
	{
		printf("\nIDENTICAL TO LIMIT");
	}
	my_ulong++;
	printf("\nAnd if we add one more:\n%" PRIu32, my_ulong);


	uint64_t my_ulong_long;
	// This generates a hidden overflow
	// my_ulong_long = (uint64_t)(my_pow(2, 64) - 1);
	// This does not unless the compiler does optimization shenanigans
	// my_ulong_long = (uint64_t)(my_pow(2, 63) - 1 + my_pow(2,63));
	// This should always work:
	my_ulong_long = my_pow(2, 63) - 1;
	my_ulong_long += my_pow(2, 63);
	printf("\nMy unsigned long long value:\n%" PRIu64, my_ulong_long);
	if (UINT64_MAX == my_ulong_long)  // more consistent than ULLONG_MAX 
	{
		printf("\nIDENTICAL TO LIMIT");
	}
	my_ulong_long++;
	printf("\nAnd if we add one more:\n%" PRIu64, my_ulong_long);

}
