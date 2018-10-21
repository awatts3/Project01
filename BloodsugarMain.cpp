/*
Andrew Watts
Project01
COSC 2030
October 26 2018
*/

#include<iostream>
#include "LinkedList.h"
#include"Weeks.h"
#include"Days.h"

using std::cin;
using std::cout;


int main() {
	
	Days D;
	float Value(0);
	char command(0);
	while (!D.done()) {
		
		if(D.iterator<8){
			cout << "Input a bloodsugar reading  for day " << D.iterator << " week " << D.W.iterator << ":" << endl; 
		}
		else {
			cout << "Input a bloodsugar reading  for day " << D.iterator-7 << " week " << D.W.iterator << ":" << endl;
		}
		cout << "N to proceed to next day, D to display daily summary, W to display weekly summary" << endl;
		cin >> Value;
		if (cin.fail()) {
			cin.clear();
			cin >> command;
			if (cin.fail()) { 
				cin.clear(); 
				cin.ignore(); 
				break;
			}
			if (command == 'D') {
				D.summary();
			}
			if (command == 'W') {
				D.W.summary();
			}
			if (command == 'N') {
				D.Nextday();
			}
		}
		else {
			if (Value > 0) {
			D.input(Value);
			}
		}
	
		
	}
	D.weekSummary();

	system("pause");
	return(0);
}
