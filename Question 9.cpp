//#include<iostream>
//using namespace std;
//int main()
//{
//	char package;
//	double monthlybill=0, hours=0;
//
//	cout << "Which Package have you purchased? ";
//	cin >> package;
//	cout << "How many hours did you use it? ";
//	cin >> hours;
//	if (hours <= 744)
//	{
//		if (package == 'A')
//		{
//			monthlybill = 0.99 + (2 * (hours - 10));
//			cout << "The Total Ammount due is: " << monthlybill;
//		}
//		else if (package == 'B')
//		{
//			monthlybill = 14.95 + ((hours - 20));
//			cout << "The Total Ammount due is: " << monthlybill;
//		}
//		else if (package == 'C')
//		{monthlybill = 19.95;
//		cout << "The Total Ammount due is: " << monthlybill;
//		}
//	}
//	else
//		cout << "No such option available!!!! Please enter the right package (A,B or C) or time which is less than 744";
//	return 0;
//}