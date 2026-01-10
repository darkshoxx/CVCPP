#include <stdio.h>
#include <inttypes.h>
void func_1(void) 
{
	int x = 42;
	int* p = &x;
	printf("\nThe value lives at %" PRIXPTR, (uintptr_t)p);
}
void func_2(void)
{
	int y = 47;
	int* q = &y;
	printf("\nThe value lives at %p", (void*)q);
}

void func_3(int* ptr_1)
{
	int x = 42;
	int* p = &x;
	ptr_1 = p;
	printf("\nThe value lives at %" PRIXPTR, (uintptr_t)p);
}
void func_4(int* ptr_2)
{
	int y = 47;
	int* q = &y;
	ptr_2 = q;
	printf("\nThe value lives at %p", (void*)q);
}

void func_5(uint8_t address_space[8])
{
	int x = 42;
	int* p = &x;

	printf("\nThe value from F5 lives at %" PRIXPTR, (uintptr_t)p);
	uintptr_t p_val = (uintptr_t)p;
	for (size_t i = 0; i < 8; i++)
	{
		address_space[i] = (uint8_t)( (p_val >> 8 * i));
	}
}

void func_6(uint8_t address_space[8])
{
	int x = 42;
	int* p = &x;

	printf("\nThe value from F6 lives at %" PRIXPTR, (uintptr_t)p);
	uintptr_t p_val = (uintptr_t)p;
	for (size_t i = 0; i < 8; i++)
	{
		address_space[i] = (uint8_t)((p_val >> 8 * i));
	}
}

void ch6() 
{
	func_1();
	func_2();
	int a, b;
	int* first = &a;
	int* second = &b;
	func_3(first);
	func_4(second);

	printf("\nThe value lives at %" PRIXPTR, (uintptr_t)first);
	printf("\nThe value lives at %" PRIXPTR, (uintptr_t)second);

	uint8_t address_array[8];
	func_5(address_array);
	int pos;
	for (size_t i = 0; i < 8; i++)
	{
		pos = (uint8_t)address_array[i];
		printf("\nByte %d is %02X", i, pos);
	}

	uint8_t address_array_2[8];
	func_6(address_array_2);
	int pos_2;
	for (size_t j = 0; j < 8; j++)
	{
		pos_2 = (uint8_t)address_array_2[j];
		printf("\nByte %d is %02X", j, pos_2);
	}
}