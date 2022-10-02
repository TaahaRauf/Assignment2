//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int hours;
//	float totalA = 0, totalB = 0, totalC = 0, savingsA = 0, savingsB = 0, savingsC = 0;
//	char package;
//	cout << "Enter hours " << endl;
//	cin >> hours;
//	cout << "Enter Package A, B or C ";
//	cin >> package;
//	while (hours > 744) {
//		cout << " Enter valid number of hours " << endl;
//		cout << "Enter hours " << endl;
//		cin >> hours;
//	}
//	while (package != 65 && package != 66 && package != 67) {
//		cout << " Enter valid package " << endl;
//		cout << "Enter Package A, B or C ";
//		cin >> package;
//	}
//	totalA = 0.99 + (2 * (hours-10));
//
//	totalB = 14.95 + (1 * (hours - 20));
//
//	totalC = 19.95;
//	if (package == 65) {
//		cout << "You chose Package A which costs you " << totalA <<endl;
//		savingsB = totalA - totalB;
//		if (savingsB > 0) {
//			cout << "If you chose B you would have saved " << savingsB <<endl;
//		}
//		savingsC = totalA - totalC;
//		if (savingsC > 0) {
//			cout << "If you chose C you would have saved " << savingsC <<endl;
//		}
//
//	}
//	if (package == 66) {
//		cout << "You chose Package B which costs you " << totalB << endl;
//		savingsC = totalB - totalC;
//		if (savingsC > 0) {
//			cout << "If you chose C you would have saved " << savingsC;
//		}
//
//	}
//	if (package == 67) {
//		cout << "Your total due amount is " << totalC;
//	}
//	return 0;
//}