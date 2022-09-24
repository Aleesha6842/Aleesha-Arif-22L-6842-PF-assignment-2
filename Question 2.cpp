//#include<iostream>
//using namespace std;
//const int ROCK = 1;
//const int PAPER = 2;
//const int SCISSORS = 3;
//int player1, player2, player3;
//int main() {
//
//	cout << "Rock, Paper and Scissors Game!" << endl;
//	cout << "Choose one of the following options: " << endl;
//	
//	cout << "(1) for rock " << endl << "(2) for paper" << endl << "(3) for scissors " << endl;
//	cin >> player1;
//	while (player1 != 1 && player1 != 2 && player1 != 3)
//	{
//		cout << "Please enter one of the following options only." << endl;
//		cout << "(1) for rock " << endl << "(2) for paper" << endl << "(3) for scissors " << endl;
//		cin >> player1;
//	}
//	if (player1 == 1) cout << "The choosen option by player1 is Rock" << endl;
//	if (player1 == 2) cout << "The choosen option by player1 is Paper" << endl;
//	if (player1 == 3) cout << "The choosen option by player1 is Scissors" << endl;
//
//	
//
//	cout << "Rock, Paper and Scissors Game!" << endl;
//	cout << "Choose one of the following options:" << endl;
//	
//	cout << "a- for rock " << endl << "b- for paper" << endl << "c-for scissors " << endl;
//	cin >> player2;
//	while (player2 != 1 && player2 != 2 && player2 != 3)
//	{
//		cout << "Please enter one of the following options only." << endl;
//		cout << "a- for rock " << endl << "b- for paper" << endl << "c- for scissors " << endl;
//		cin >> player2;
//	}
//	if (player2 == 1) cout << "The choosen option by player2 is Rock" << endl;
//	if (player2 == 2) cout << "The choosen option by player2 is Paper" << endl;
//	if (player2 == 3) cout << "The choosen option by player2 is Scissors" << endl;
//	if (player1 == player2)
//		cout << "Draw";
//	else if (player1 == 1) 
//	{
//		if (player2 == 2) 
//			cout << "Second player wins";
//		else if (player2 == 3) 
//			cout << "First player wins";
//	}
//	else if (player1 == 2) 
//	{
//		if (player2 == 3)
//			cout << "Second player wins";
//		else if (player2 == 1) 
//			cout << "First player wins";
//	}
//	else if (player1 == 3) 
//	{
//		if (player2 == 1) 
//			cout << "Second player wins";
//		else if (player2 == 2) 
//			cout << "First player wins";
//	}
//	else
//		cout << "INVALID VALUE ENTERED\n";
//	return 0;
//}