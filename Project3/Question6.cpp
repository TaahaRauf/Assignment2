#include<iostream>
using namespace std;

int main()
{
	int date, month, year;
	bool leapyear = false;
	cout << "Enter the year " << endl;
	cin >> year;
	if (year % 100 != 0) {
		if (year % 4 == 0 || year % 400 == 0) {
			leapyear = true;
		}
	}
	cout << "Enter the month " << endl;
	cin >> month;
	while (month > 12) {
		cout << "Invalid month, enter again";
		cin >> month;
	}
	cout << "Enter the date " << endl;
	cin >> date;

	if ((month % 2) == 0) {
		if (month == 2 && leapyear == true) {
			while (date > 29) {
				cout << "You have entered the wrong date enter again ";
				cin >> date;
			}
		}

		else if (month == 2 && leapyear == false) {
			while (date > 28) {
				cout << "You have entered the wrong date enter again ";
				cin >> date;
			}

		}
		else {
			while (date > 30) {
				cout << "You have entered the wrong date enter again ";
				cin >> date;
			}
		}

	}
	else {
		while (date > 31) {
			cout << "You have entered the wrong date enter again ";
			cin >> date;
		}

	}

	if (month % 2 == 1) {
		if (date < 31) {
			date = date + 1;
			cout << date << "/" << month << "/" << year;
		}
		else {
			date = 1;
			month = month + 1;
			cout << date << "/" << month << "/" << year;
		}
	}
	if (month % 2 == 0) {
		if (month == 2) {
			if (leapyear == true) {
				if (date < 29) {
					date = date + 1;
					cout << date << "/" << month << "/" << year;
				}

				else {
					month = month + 1;
					date = 1;
					cout << date << "/" << month << "/" << year;
				}
			}
			else {
				if (date < 28) {
					date = date + 1;
					cout << date << "/" << month << "/" << year;
				}
				else {
					month = month + 1;
					date = 1;
					cout << date << "/" << month << "/" << year;
				}
			}
		}
		if (date < 30) {
			date = date + 1;
			cout << date << "/" << month << "/" << year;
		}
		else {
			month = month + 1;
			date = 1;
			cout << date << "/" << month << "/" << year;
		}
	}
	return 0;
}
