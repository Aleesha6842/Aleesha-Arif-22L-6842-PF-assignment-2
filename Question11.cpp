//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int PagesRequired, PagesLeft, Thousands, FiveHundreds, Hundreds;
//	cout << "Enter the amount of pages you want: ";
//	cin >> PagesRequired;
//	cout << "You can get " << PagesRequired << " pages for \$" << PagesRequired * 0.1 << " Or \n";
//	if (PagesRequired % 1000 != PagesRequired) {
//		Thousands = PagesRequired/ 1000;
//		FiveHundreds = PagesRequired / 500;
//		if (PagesRequired % 1000 == 0) {
//			cout << "1. It will be cost-effective to buy " << Thousands << "000 pages for \$" << Thousands * 1000 * 0.03;
//		}
//		else {
//			cout << "1. It will be cost-effective to buy " << Thousands + 1 << "000 pages for \$" << (Thousands + 1) * 1000 * 0.03;
//		}
//		if (PagesRequired % 500 == 0) {
//			cout << "\n2. It will be cost-effective to buy " << FiveHundreds * 500 << " pages for \$" << FiveHundreds * 500 * 0.04;
//		}
//		else {
//			cout << "\n2. It will be cost-effective to buy " << (FiveHundreds + 1) * 500 << " pages for \$" << (FiveHundreds + 1) * 500 * 0.04;
//		}
//	}
//	else if (PagesRequired> 500) {
//		cout << "1. It will be cost-effective to buy 1000 pages for \$" << 1000 * 0.03;
//		Hundreds = PagesRequired / 100;
//		if (PagesRequired % 100== 0) {
//			cout << "\n2. It will be cost-effective to buy " << Hundreds * 100 << " pages for \$" << Hundreds * 100 * 0.055;
//		}
//		else {
//			cout << "\n2. It will be cost-effective to buy " << (Hundreds + 1) * 100 << " pages for \$" << (Hundreds + 1) * 100 * 0.055;
//		}
//	}
//	else if (PagesRequired > 100) {
//		cout << "1. It will be cost-effective to buy 500 pages for \$" << 500 * 0.04;
//		Hundreds = PagesRequired / 100;
//		if (PagesRequired % 100 == 0) {
//			cout << "\n2. It will be cost-effective to buy " << Hundreds * 100 << " pages for \$" << Hundreds * 100 * 0.055;
//		}
//		else {
//			cout << "\n2. It will be cost-effective to buy " << (Hundreds + 1) * 100 << " pages for \$" << (Hundreds + 1) * 100 * 0.055;
//		}
//	}
//	else {
//		cout << "1. It will be cost-effective to buy 100 pages for \$" << 100 * 0.055;
//	}
//	return 0;
//}