//#include<iostream>
//using namespace std;
//int main()
//{
//	int withdraw, bankBalance,notes,dailyWithdraw;
//	cout << "Enter total money in your account: ";
//	cin >> bankBalance;
//	cout << "Enter your daily withdraw amount: ";
//	cin >> dailyWithdraw;
//	cout << "Enter amount you want to withdraw: ";
//	cin >> withdraw;
//	if (withdraw > bankBalance)
//	{
//		cout << "your bank balance is not enough";
//
//	}
//	else if (withdraw < 500)
//	{
//		cout << "Please enter amount greater than 500";
//	}
//	else if (withdraw % 500 != 0)
//	{
//		cout << "Please enter amount multiple of 500";
//	}
//	else if (withdraw > dailyWithdraw)
//	{
//		cout << "Your daily amount has been reached";
//	}
//	else
//	{
//		notes = withdraw / 500;
//	cout << "Your withdraw amount is " << withdraw << '\n';
//	cout << "There are " << notes << " notes of 500" << '\n';
//	cout << "Thanku for choosing us :)";
//
//	}
//	return 0;
//}