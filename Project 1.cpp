#include <iostream>

using namespace std;

void boardGame();
const int ROW = 3;
const int COL = 3;
char Showboards[ROW][COL] = { { '*','*','*' },{ '*','*','*' },{ '*','*','*' } };

// In Order to Play you need to pick 2 numbers 
// First the Row 0,1,2
// Then the COl 0,1,2

void boardGame()
{


	cout << "    " << Showboards[0][0] << " | " << Showboards[0][1] << " | " << Showboards[0][2] << endl;
	cout << "   ___|___|___\n";
	cout << "    " << Showboards[1][0] << " | " << Showboards[1][1] << " | " << Showboards[1][2] << endl;
	cout << "   ___|___|___\n";
	cout << "    " << Showboards[2][0] << " | " << Showboards[2][1] << " | " << Showboards[2][2] << endl;
	
} // Game Board

int main()
{
	string Player1;
	string Player2;
	int ROW = 3;
	int COL = 3;
	char Turn = 'X';
	int num = 0;


	cout << "Let's play Tic-Tac-Toe!\nPlayer 1 name Please: ";
	cin >> Player1;
	cout << endl;
	cout << Player1 << " you are X! You will also have the first turn.";
	cout << endl;



	cout << "Player 2, Name Please: ";
	cin >> Player2;
	cout << endl;
	cout << Player2 << ", you are O!";
	cout << endl << endl;

	boardGame();
	

	do
	{
		cout << "To choose a position enter in the row number \n[SPACE] then the column number: ";
		cin >> ROW;
		cin >> COL;
		if (Showboards[ROW][COL] == '*') {
			Showboards[ROW][COL] = Turn;
			if (Turn == 'X')
				Turn = 'O';
			else
				Turn = 'X';
		}
		cout << endl;
		boardGame();

	} while (true);

	
	return 0;
} // End of Tic-tac-Toe


