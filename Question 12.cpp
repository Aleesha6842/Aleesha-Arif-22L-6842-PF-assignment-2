//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	float magnitude, unit, Sound_Pressure=0;
//	const float p0 = 20 * pow(10,-6);
//	cout << "Enter Magnitude : ";
//	cin >> magnitude;
//	cout << "Enter unit (dB = 0; Pa = 1): ";
//	cin >> unit;
//	if (unit == 0) {
//		Sound_Pressure = magnitude;
//	}
//	else {
//		Sound_Pressure = log10(magnitude / p0);
//		Sound_Pressure = 20 * Sound_Pressure;
//	}
//
//	if (Sound_Pressure > 140) {
//		cout << "Sound Pressure is higher than Threshold of Pain";
//	}
//	else if (Sound_Pressure > 125) {
//		cout << "Sound Pressure closest to Threshold of Pain";
//	}
//	else if (Sound_Pressure > 110) {
//		cout << "Sound Pressure closest to Possible Hearing Damage";
//	}
//	else if (Sound_Pressure > 95) {
//		cout << "Sound Pressure closest to Jack Hammer at 1 m";
//	}
//	else if (Sound_Pressure > 75) {
//		cout << "Sound Pressure closest to Traffic on Busy Roadway at 10 m";
//	}
//	else if (Sound_Pressure > 45) {
//		cout << "Sound Pressure closest to Normal Conversation";
//	}
//	else if (Sound_Pressure > 15) {
//		cout << "Sound Pressure closest to Calm Library";
//	}
//	else if (Sound_Pressure < -10) {
//		cout << "Sound Pressure closest to Light Leaf Rustling";
//	}
//	else {
//		cout << "Sound Pressure is lower than Light Leaf Rustling";
//	}
//	return 0;
//}