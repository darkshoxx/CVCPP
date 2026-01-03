#include <stdio.h>

void ch4(void)
{
	printf("CH 4 is here! Even in C!");
	int my_int;
	short my_short;
	long my_long;
	long long my_long_long; // This should still work in C because it's modern C but can fail
	// if backwards compatibility is required

	unsigned int my_uint;
	unsigned short my_ushort;
	unsigned long my_ulong;
	unsigned long long my_ulong_long;

	// This doesn't work because pow requires floats.
	//my_int = pow(2, 14);
	//my_short = pow(2, 15) - 1;
	//my_long = pow(2, 31) - 1;
	//my_long_long = pow(2, 63) - 1;

	my_int = 32767;
	my_short = 32767;
	my_long = 30;
	my_long_long = 40;
	printf("\nMy integer value \n%d", my_int);
	printf("\nMy short value \n%hd", my_short);
	printf("\nMy long value \n%ld", my_long);
	printf("\nMy long long value \n%lld", my_long_long);
}