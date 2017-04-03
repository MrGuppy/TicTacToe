#include "Board.h"
#include <iostream>
#include "MainMenu.h"
using namespace std;

Board::Board()
{

}

Board::~Board()
{

}

void Board::gameBoard()
{
	cout << "     |   |" << endl;
	cout << "   " << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << endl;
	cout << "  ---+---+---" << endl;
	cout << "   " << grid[1][0] << " | " << grid[1][1] << " | " << grid[1][2] << endl;
	cout << "  ---+---+---" << endl;
	cout << "   " << grid[2][0] << " | " << grid[2][1] << " | " << grid[2][2] << endl;
	cout << "     |   |" << endl << endl;
}

void Board::placePiece(int input, char playerIcon)
{
	//Use returned input to place the piece (playerIcon)
	//Piece is placed where chosen
	row = (input - 1) / 3;
	col = (input - 1) % 3;
	grid[row][col] = playerIcon;
}


void Board::checkWin(char playerIcon)
{
	MainMenu* returnMenu = new MainMenu;

	for (int i = 0; i < 3; ++i)
	{
		if (grid[i][0] == playerIcon && grid[i][1] == playerIcon && grid[i][2] == playerIcon) //check row 'playerIcon'
		{
			cout << "Player " << playerIcon << " WINS!!" << endl;
			system("pause");
			system("cls");
			returnMenu->Start();
		}

		if (grid[0][i] == playerIcon && grid[1][i] == playerIcon && grid[2][i] == playerIcon) //check col 'playerIcon'
		{
			cout << "Player " << playerIcon << " WINS!!" << endl;
			system("pause");
			system("cls");
			returnMenu->Start();
		}

		if (grid[0][0] == playerIcon && grid[1][1] == playerIcon && grid[2][2] == playerIcon) // check diagonal top left/bottom right 'playerIcon'
		{
			cout << "Player " << playerIcon << " WINS!!" << endl;
			system("pause");
			system("cls");
			returnMenu->Start();
		}

		if (grid[2][2] == playerIcon && grid[1][1] == playerIcon && grid[0][0] == playerIcon) // check diagonal top right/bottom left 'playerIcon'
		{
			cout << "Player " << playerIcon << " WINS!!" << endl;
			system("pause");
			system("cls");
			returnMenu->Start();
		}
	}
	delete returnMenu;
}
