#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::endl;
using std::fabs;
using std::log2;
using std::log10;
using std::setprecision;
void ch5() {
	// Problem 1 - the crux of IEEE 754
	// Part 1
	constexpr float tolerance = 1e-5f;
	float a = 0.1f;
	float b = 0.2f;
	float c = a + b;
	if (c == 0.3)
	{
		cout << "Virtually impossible to reach!\n";
	}
	else
	{
		cout << "This is a bug\n";
	}
	float diff_fl = (float)fabs(c - 0.3);
	bool compare_fl = diff_fl < tolerance;
	if (compare_fl){
		cout << "This tolerance should do\n";
	}
	// Part 2
	double ad = 0.1;
	double bd = 0.2;
	double cd = ad + bd;
	if (cd == 0.3) {
		cout << "Virtually impossible to reach!\n";
	}
	else
	{
		cout << "This is a bug\n";
	}
	double diff_do = fabs(cd - 0.3);
	bool compare_do = diff_do < tolerance;
	if (compare_do) {
		cout << "This is fine\n";
	}
	cout << setprecision(10);
	cout << "logs for size comparison\n";
	cout << "log10(diff_fl):" << log10(diff_fl) << "\n";
	cout << "log10(diff_do):" << log10(diff_do) << "\n";
	cout << "log2(diff_fl):" << log2(diff_fl) << "\n";
	cout << "log2(diff_do):" << log2(diff_do) << "\n";
	cout << endl;

}