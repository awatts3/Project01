#ifndef DAYS_H
#define DAYS_H

#include "LinkedList.h"
#include"Weeks.h"

class Days {
public:

	Days();

	void Nextday();
	void summary();
	void input(float in);
	bool done();
	void weekSummary();
	int iterator;
	Week W;
private:
	
	double tempSum, tempMax, tempMin, tempCount;
	List sum;
	List max;
	List min;
	List count;

};

#endif

