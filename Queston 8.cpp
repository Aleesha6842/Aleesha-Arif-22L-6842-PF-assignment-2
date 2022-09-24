//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int option=0;
//	float speed, time, distance;
//	bool rightOption = false;
//	cout << "Select any one from the following gases: \n";
//
//	cout << "a)Carbon Dioxide\nb)Air\nc)Helium\nd)Hydrogen\n";
//	
//	while (option == false)
//
//	{
//		cin >> rightOption;
//		if (option == 1) {
//			speed = 258.0;
//			rightOption = true;
//		}
//		else if (option == 2) {
//			speed = 331.5;
//			rightOption = true;
//		}
//		else if (option == 3) {
//			speed = 972.0;
//			rightOption = true;
//		}
//		else if (option==4){
//			speed = 1270.0;
//			rightOption = true;
//		}
//		else {
//			cout << "Wrong Value!!!! Select one of the 4 gases: ";
//		}
//	}
//	cout << "Enter the time in sec that  the sound took to reach the destination from the source: ";
//	rightOption = false;
//	while (rightOption == false) {
//		cin >> time;
//		if (time < 0 || time >30) {
//			cout << "Wrong Value!!! Time should be between 0 seconds and 30 seconds: ";
//		}
//		else {
//			distance = time * speed;
//			rightOption = true;
//		}
//	}
//	cout << "Distance between source and destination is  " << distance << " m";
//	return 0;
//}