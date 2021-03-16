// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main()
{
	char Motel;
	float G, F, Q, A, B, C, yes, no;
	cout << "What room do you want?" << " (Input G for garden with extra cot, F for football with extra cot, Q for quad with extra cot)" << endl << "(A for garden w / o cot, B for football w / o cot, and C for quad w / o cot :)" << endl;
	cin >> Motel;
	switch (Motel)
	{
	case 'G':
		G = 75.00;
		yes = 10.00;
		cout << "Bought:" << endl << "one Garden - view room :               $75.00" << endl << "one extra cot:                         $10.00" << endl << "Total is:" << " $" << (G + yes) << ".00" << endl;
		break;
	case 'F':
		F = 65.00;
		yes = 10.00;
		cout << "Bought:" << endl << "one Football stadium view room:               $65.00" << endl << "one extra cot:                                $10.00" << endl << "Total is:" << " $" << (F + yes) << ".00" << endl;
		break;
	case 'Q':
		Q = 70.00;
		yes = 10.00;
		cout << "Bought:" << endl << "one campus Quad room:               $70.00" << endl << "one extra cot:                      $10.00" << endl << "Total is:" << " $" << (Q + yes) << ".00" << endl;
		break;
	case 'A':
		G = 75.00;
		cout << "Bought: one Garden-view room:               $75.00" << endl << "Total is: " << '$' << G << ".00";
		break;
	case 'B':
		F = 65.00;
		cout << "Bought: one Football stadium view room:               $65.00" << endl << "Total is: " << '$' << F << ".00";
		break;
	case 'C':
		Q = 70.00;
		cout << "Bought: one campus Quad room:               $70.00" << endl << "Total is: " << '$' << Q << ".00";
		break;
	default:
		cout << "There seems to be an error. What you inputted is not an answer. Please try again" << endl;
		break;
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
