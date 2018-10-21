#include "Weeks.h"

Week::Week()
{
	iterator = 1;
	max.insertAsFirst(0);
	min.insertAsFirst(1000); //min is initaily 1000 because there is no way a reading should be over 600 thus any input will be set as loswer and thus the min
	count.insertAsFirst(0);
	DaytoDay.insertAsFirst(0);
}

void Week::summary()
{
	cout << "Sum of this week's inputs: " << sum.Getfirst() << endl;
	cout << "Largest of this week's inputs: " << max.Getfirst() << endl;
	cout << "Smallest of this week's inputs: " << min.Getfirst() << endl;
	cout << "Total number of inputs this week: " << count.Getfirst() << endl;
	cout << "Day with the largest change from previous day this week:" << DaytoDay.Getfirst() << endl;

}

void Week::NextWeek()
{
	if (iterator<14) {
		sum.insertAsFirst(0);
		max.insertAsFirst(0);
		min.insertAsFirst(1000);
		count.insertAsFirst(0);
		DaytoDay.insertAsFirst(0);
	}
	iterator++;
}

void Week::input(double in)
{
	cout << "adding " << in << " to week " << iterator << endl;
	if (sum.empty()) {
		
		sum.insertAsFirst(in);
	}
	else {
		tempSum = sum.Getfirst();
		tempSum = tempSum + in;
		sum.removeFirst();
		sum.insertAsFirst(tempSum);
	}
	if (in > max.Getfirst()) {
		max.removeFirst();
		max.insertAsFirst(in);
	}
	if (in < min.Getfirst()) {
		min.removeFirst();
		min.insertAsFirst(in);
	}
	tempCount = count.Getfirst();
	count.removeFirst();
	count.insertAsFirst(tempCount + 1);
}

void Week::Delta(double change, int day)
{

	if (change>tempchange) {
		
		tempchange = change;
		DaytoDay.removeFirst();
		DaytoDay.insertAsFirst(day);
	}
}

void Week::Sum()
{
	cout << sum << endl;
}
