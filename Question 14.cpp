//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a= 4, c = 2,N,a_1,a_2;
//	bool a_1Prime=false, a_2Prime=false;
//	cout << "Enter number to iterate up to: ";
//	cin >> N;
//	while (a <= N) {
//		a_1 = a;
//		a_2 = a- 2;
//		if (a_1 % a_1 == 0 && a_1 % 1 == 0) {
//			a_1Prime = true;
//		}
//		while (c < 10) {
//			if (a_1== 2 || a_1 == 3 || a_1 == 5 || a_1 == 7) {
//				break;
//			}
//			if (a_1 % c == 0) {
//				a_1Prime = false;
//				break;
//			}
//			c++;
//		}
//		c = 2;
//		if (a_2 % a_2 == 0 && a_2 % 1 == 0) {
//			a_2Prime = true;
//		}
//		while (c < 10) {
//			if (a_2 == 2 || a_2 == 3 || a_2 == 5 || a_2 == 7) {
//				break;
//			}
//			if (a_2 % c == 0) {
//				a_2Prime = false;
//				break;
//			}
//			c++;
//		}
//		if (a_1Prime == true && a_2Prime == true) {
//			cout << "(" << a_2 << " , " << a_1 << ")";
//		}
//		a++;
//	}
//
//	return 0;
//}