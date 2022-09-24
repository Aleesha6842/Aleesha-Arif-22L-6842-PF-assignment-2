//#include<iostream>
//using namespace std;
//int main()
//{
//	char package, priceOfPkgA, priceOfpkgB, priceOfPkgC;
//	float  monthlyBill = 0, hours = 0;
//
//	cout << "Which Package have you purchased? ";
//	cin >> package;
//	cout << "How many hours did you use it? ";
//	cin >> hours;
//	if (hours <= 744)
//	{
//		if (package == 'A')
//		{
//			monthlyBill = 0.99 + (2 * (hours - 10));
//			cout << "The Total Ammount due is: " << monthlyBill;
//		}
//		else if (package == 'B')
//		{
//			monthlyBill = 14.95 + ((hours - 20));
//			cout << "The Total Ammount due is: " << monthlyBill;
//		}
//		else if (package == 'C')
//		{
//			monthlyBill = 19.95;
//			cout << "The Total Ammount due is: " << monthlyBill;
//		}
//	}
//	else
//		cout << "No such option available!!!! Please enter the right package (A,B or C) or time which is less than 744";
//	
//	if (package== 'A' && priceOfPkgA > priceOfpkgB) {
//		cout << "Your bill comes out to \$" << priceOfPkgA;
//		cout << "\nIf you purchased Package Subscription B, you wouldve saved \$" << (priceOfPkgA - priceOfpkgB);
//	}
//	else if (package == 'A' && priceOfPkgA < priceOfpkgB) {
//		cout << "Your bill comes out to \$" << priceOfPkgA;
//	}
//
//	else if (package =='B' && priceOfpkgB > priceOfPkgC) {
//		cout << "Your bill comes out to \$" << priceOfpkgB;
//		cout << "\nIf you purchased Package Subscription C, you wouldve saved \$" << (priceOfpkgB - priceOfPkgC);
//	}
//	else if (package == 'B' && priceOfpkgB < priceOfPkgC) {
//		cout << "Your bill comes out to \$" << priceOfpkgB;
//	}
//
//	if (package == 'C') {
//		cout << "You total bill comes out to \$" << priceOfPkgC;
//	}
//}
