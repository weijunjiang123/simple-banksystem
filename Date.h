#pragma once
class Date
{
protected:
	int year;
	int mounth;
	int day;
	int totalDays;

public:
	Date(int year, int mount, int day);
	const int getYear();
	const int getMonth();
	const int getDay();
	const int getMaxDay();
	const bool isLeapYear();
	const void show();
	const int distance(Date date);
};

