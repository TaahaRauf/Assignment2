//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int sheets;
//	float totalA = 0, totalB = 0, totalC = 0, totalD = 0;
//	int round100, round500, round1000;
//	float savingsA = 0, savingsB = 0, savingsC, savingsD = 0;
//	char package;
//	cout << "Enter sheets " << endl;
//	cin >> sheets;
//	
//	totalA = 0.1 * sheets;
//	round100 = int(((sheets + 100) / 100)) * 100;
//	totalB = 0.055 * round100;  // This will round up to the nearest hundred
//
//	round500 = int((((sheets + 500) / 500))) * 500; // This will round up to the nearest 500
//	totalC = 0.04 * round500;
//
//
//	round1000 = int(((sheets + 1000) / 1000)) * 1000; // This will round up to the nearest 1000
//	totalD = 0.03 * round1000;
//
//
//	cout << "If you buy single sheets you will have to pay " << totalA <<endl;
//	cout << "If you buy in multiple of 100s sheets you will have to buy " << round100 << " sheets and pay " << totalB << endl;
//	cout << "If you buy in multiple of 500s sheets you will have to buy " << round500 << " sheets and pay " << totalC << endl;
//	cout << "If you buy in multiple of 1000s sheets you will have to buy " << round1000 << " sheets and pay " << totalD << endl;
//
//	if (totalA < totalB && totalA < totalC && totalA < totalD) {
//		cout << " So you should buy package A";
//	}
//	if (totalB < totalA && totalB < totalC && totalB < totalD) {
//		cout << " So you should buy package B";
//	}
//	if (totalC < totalA && totalC < totalB && totalC < totalD) {
//		cout << " So you should buy package C";
//	}
//	if (totalD < totalA && totalD < totalB && totalD < totalC) {
//		cout << " So you should buy package D";
//	}
//	return 0;
//}