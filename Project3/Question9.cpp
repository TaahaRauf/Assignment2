//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int hours;
//	float total = 0;
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
//	if (package == 65) {
//		hours = hours - 10;
//		total = 0.99 + (2 * hours);
//	}
//	if (package == 66) {
//		hours = hours - 20;
//		total =  14.95 + ( 1 * hours);
//	}
//	if (package == 67) {
//		total = 19.95;
//	}
//	
//	cout << "The total amount due is " << total;
//	return 0;
//}