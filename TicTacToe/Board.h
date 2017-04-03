#pragma once
#include "PlayerPosition.h"

class Board
{
public:
	
	Board();
	~Board();
	void gameBoard();
	void placePiece(int input, char playerIcon);
	void checkWin(char playerIcon);
	char grid[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
private:
	int row;
	int col;
};

