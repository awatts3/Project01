#include "Days.h"

Days::Days()
{
	iterator = 1;
	max.insertAsFirst(0);
	min.insertAsFirst(1000); //min is initaily 1000 because there is no way a reading should be over 600 thus any input will be set as loswer and thus the min
	count.insertAsFirst(0);
}

void Days::Nextday()
{
	
	W.Delta(sum.Getfirst(), iterator);
	if(iterator<14){
		sum.insertAsFirst(0);
		max.insertAsFirst(0);
		min.insertAsFirst(1000);
		count.insertAsFirst(0);
	}
	if (iterator == 7) {
		W.NextWeek();
	}
	
	iterator++;
}

void Days::summary()
{
	cout <<"Sum of today's inputs: "<< sum.Getfirst() << endl;
	cout <<"Largest of today's inputs: "<< max.Getfirst() << endl;
	cout <<"Smallest of today's inputs: "<< min.Getfirst() << endl;
	cout <<"Total number of inputs today: "<< count.Getfirst() << endl;

}

void Days::input(float in)
{
	cout << "adding " << in << " to day " << iterator << endl;
	W.input(in);
	if (sum.empty()){
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
	tempCount =count.Getfirst();
	count.removeFirst();
	count.insertAsFirst(tempCount + 1);
}

bool Days::done()
{
	if (iterator >= 15) { return true; }
	return false;
}

void Days::weekSummary()
{
	W.summary();
}
