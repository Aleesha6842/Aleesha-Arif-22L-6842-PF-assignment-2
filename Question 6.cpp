//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int date0, month0, year0,  newDate, newMonth, newYear;
//	
//	bool rightDate=false, leapYear = false;
//	while (rightDate == false) {
//		cout << "Enter Date: ";
//		cin >> date0;
//		cout << "Enter Month: ";
//		cin >> month0;
//		cout << "Enter Year: ";
//		cin >> year0;
//
//		if (year0 % 4 == 0) {
//			if (year0 % 100 == 0) {
//				if (year0 % 400 == 0) {
//					leapYear = true;
//				}
//			}
//			else {
//				leapYear = false;
//			}
//		}
//
//		if (date0 > 31 || month0 > 12 || year0 < 0) {
//			cout << "Invalid date. Try again.\n";
//		}
//		else if (month0 == 2 && date0 > 28 && leapYear == false) {
//			cout << "Invalid date. Try again.\n";
//		}
//		else if (month0 == 2 && date0 > 29 && leapYear == true) {
//			cout << "Invalid date. Try again.\n";
//		}
//		else if ((month0 == 4 || month0 == 6 || month0 == 9 || month0 == 11) && date0 > 30 && leapYear == false) {
//			cout << "Invalid date. Try again.\n";
//		}
//		else {
//			rightDate = true;
//		}
//	}
//	newDate = date0;
//	newMonth = month0;
//	newYear = year0;
//	if (month0 == 12){
//		if (date0 == 31) {
//			newMonth = 1;
//			newDate = 1;
//			newYear++;
//		}
//		else {
//			newDate++;
//		}
//	}
//	else if (month0 == 4 || month0 == 6 || month0 == 9 || month0 == 11) {
//		if (date0 == 30) {
//			newMonth++;
//			newDate = 1;
//		}
//		else {
//			newDate++;
//		}
//	}
//	else if (month0 == 2) {
//		if (date0 == 29 && leapYear==true) {
//			newMonth++;
//			newDate = 1;
//		}
//		else if (date0 == 28 && leapYear == false) {
//			newMonth++;
//			newDate = 1;
//		}
//		else {
//			newDate++;
//		}
//	}
//	else {
//		if (date0 == 31) {
//			newMonth++;
//			newDate = 1;
//		}
//		else {
//			newDate++;
//		}
//	}
//	
//	cout << "Next Date: " << newDate << "-" << newMonth << "-" << newYear;
//
//	return 0;
//}