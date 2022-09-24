//#include <iostream>
//using namespace std;
//int main() {
//	cout << "Code		Meal			 Price/kg in Pakistani Rupees\n";
//	cout << "1-  	         FireHotSteak		                1800\n";
//	cout << "2-		Sole Meuniere				2000\n";
//	cout << "3-		Texas Barbecue 				2200\n";
//	cout << "4-		Maxican Corn Salad 			500\n";
//	cout << "5-		Creamy Mushroom 			2500\n";
//
//	int usersCode{ 0 }, quantity{ 0 }, meal_price{ 0 };
//	cout << "Meal choice :";
//	cin >> usersCode;
//	if (usersCode == 1 || usersCode== 2 || usersCode == 3 || usersCode == 4 || usersCode == 5) {
//		cout << "Enter the quantity in kg(s) = ";
//		cin >> quantity;
//		if (quantity == 0) {
//			cout << "Invalid quantity";
//
//		}
//		else {
//			if (usersCode == 1) {
//				cout << "Meal : Fire Hot steak\n";
//				meal_price = 1800 * quantity;
//			}
//			else if (usersCode == 2) {
//				cout << "Meal : Sole Meuniere \n";
//				meal_price = 2000 * quantity;
//			}
//			else if (usersCode == 3) {
//				cout << "Meal  : Texas Barbecue \n";
//				meal_price = 2200 * quantity;
//			}
//			else if (usersCode == 4) {
//				cout << "Meal : Maxican Corn Salad  \n";
//				meal_price = 500 * quantity;
//			}
//			else if (usersCode == 5) {
//				cout << "Meal c : Creamy Mushroom \n";
//				meal_price = 2500 * quantity;
//			}
//
//
//			cout << "\n";
//			cout << "In which currency will you like to pay?\n";
//			cout << "1.		PAKISTANI RUPEES\n";
//			cout << "2.		AMERICAN DOLLARS\n";
//			cout << "3.		EUROS\n";
//			float currency{ 0 };
//			cin >> currency;
//
//			if (meal_price <= 1000) {
//				if (currency == 1)
//					cout << "Total bill =" << meal_price << " pkr";
//				else if (currency == 2)
//					cout << "Total bill =" << "$ " << meal_price / 200;
//				else
//					cout << "Total bill =" << meal_price / 220 << " euros";
//			}
//			else if (meal_price > 1000 && meal_price <= 3000) {
//				if (currency == 1)
//					cout << "Total bill =" << (meal_price * 0.02) + meal_price << " pkr";
//				else if (currency == 2)
//					cout << "Total bill =" << "$ " << ((meal_price * 0.02) + meal_price) / 200;
//				else
//					cout << "Total bill =" << ((meal_price * 0.02) + meal_price) / 220 << " euros";
//
//			}
//			else if (meal_price > 3000) {
//				if (currency == 1)
//					cout << "Total bill =" << (meal_price * 0.05) + meal_price << " pkr";
//				else if (currency == 2)
//					cout << "Total bill =" << ((meal_price * 0.05) + meal_price) / 200 << "dollars";
//				else
//					cout << "Total bill =" << ((meal_price * 0.05) + meal_price) / 220 << " euros";
//			}
//		}
//	}
//	else
//		cout << "Invalid choice!!! Please choose from menu";
//
//	return 0;
//}