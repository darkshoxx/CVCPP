#include <stdio.h>
#include <stdint.h>
#include <math.h>

void ch5(void){
	// Problem 1 - the crux of IEEE 754
	// Part 1
	float a = 0.1f;
	float b = 0.2f;
	float c = a + b;
	if (c == 0.3)
	{
		// changing 0.3 to 0.3f WILL actually in some cases reach this block.
		printf("Virtually impossible to reach\n");
	}
	else
	{
		printf("This is a bug!\n");
	}
	float diff_fl = (float)fabs(c - 0.3);
	if (diff_fl < 1e-5) {
		printf("This tolerance should do the trick\n");
	}
	// Part 2
	double ad = 0.1;
	double bd = 0.2;
	double cd = ad + bd;
	if (cd == 0.3)
	{
		printf("Virtually impossible to reach\n");
	}
	else
	{
		printf("This is a bug!\n");
	}
	double diff_do = fabs(cd - 0.3);
	if (diff_do<1e-5) {
		printf("This tolerance should do the trick\n");
	}
	printf("logs for size comparison\n");
	printf("\nlog10(diff_fl):%f\n", (double)log10(diff_fl)); // About -8
	printf("\nlog10(diff_do):%f\n", (double)log10(diff_do)); // About -16
	printf("\nlog2(diff_fl):%f\n", log2(diff_fl));   // About -26
	printf("\nlog2(diff_do):%f\n", log2(diff_do));   // About -54 (exactly even)
}