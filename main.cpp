#include <iostream>
#include <assert.h>
#include "extra-task-1.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	//����� � ������� seconds_difference
	assert(seconds_difference(1800.0, 3600.0) - 1800.0 < DBL_EPSILON);
	assert(seconds_difference(3600.0, 1800.0) - (-1800.0) < DBL_EPSILON);
	assert(seconds_difference(1800.0, 2160.0) - 360.0 < DBL_EPSILON);
	assert(seconds_difference(1800.0, 1800.0) - 0.0 < DBL_EPSILON);

	assert(hours_difference(1800.0, 3600.0) - 0.5 < DBL_EPSILON);
	assert(hours_difference(3600.0, 1800.0) - (-0.5) < DBL_EPSILON);
	assert(hours_difference(1800.0, 2160.0) - 0.1 < DBL_EPSILON);
	assert(hours_difference(1800.0, 1800.0) - 0.0 < DBL_EPSILON);

	assert(to_float_hours(0, 15, 0) - 0.25 < DBL_EPSILON);
	assert(to_float_hours(2, 45, 9) - 2.7525 < DBL_EPSILON);
	assert(to_float_hours(1, 0, 36) - 1.01 < DBL_EPSILON);

	cout << to_24_hour_clock(25) << endl;
	cout << to_24_hour_clock(24) << endl;
	cout << to_24_hour_clock(48) << endl;
	cout << to_24_hour_clock(4) << endl;
	cout << to_24_hour_clock(28.5) << endl;
	system("pause");
}