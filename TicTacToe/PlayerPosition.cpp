#include "PlayerPosition.h"
#include <iostream>
#include "Board.h"
using namespace std;

PlayerPosition::PlayerPosition(int turn, char icon)
{
	playerIcon = icon;
	playerTurn = turn;
}

PlayerPosition::~PlayerPosition()
{
}

int PlayerPosition::Playerturn(char grid[3][3])
{
		cout << "Please choose a number to assign (" << playerIcon << ")" << endl;
		std::cin >> input;
		if (input == 1 || input == 2 || input == 3 || input == 4 || input == 5 || input == 6 || input == 7 || input == 8 || input == 9)
		{
			return input;  
		}
		else 
			cout << "invalid input" << endl << endl;
		return 0;
}

char PlayerPosition::getPlayerIcon()
{
	return playerIcon;
}


	
