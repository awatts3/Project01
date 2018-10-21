#ifndef WEEKS_H
#define WEEKS_H

#include "LinkedList.h"

class Week {
public:

	Week();

	void summary();
	void NextWeek();
	void input(double in);
	void Delta(double change, int day);
	void Sum();
	int iterator;
	
private:
	double tempSum, tempMax, tempMin, tempCount;
	double tempchange=0;
	List sum;
	List DaytoDay;
	List min;
	List max;
	List count;
};

#endif

