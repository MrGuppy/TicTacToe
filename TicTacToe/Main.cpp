#include <iostream>
#include "Board.h"
#include "MainMenu.h"
#include "PlayerPosition.h"
using namespace std;

using namespace std;

void main()
{
	MainMenu* begin = new MainMenu;
	PlayerPosition* player[2];
	player[0] = new PlayerPosition(1, 'X');
	player[1] = new PlayerPosition(2, 'O');

	Board* board = new Board;

	int decideTurn = 0;

	begin->Start();

	bool gameRunning = true;
	while (gameRunning)
	{
		system("cls");
		board->gameBoard();
		int Var = player[decideTurn]->Playerturn(board->grid);		 //Player decides where to place

		board->placePiece(Var, player[decideTurn]->getPlayerIcon()); //Work out where to place piece: Player chooses through input. Return their choice.

		board->checkWin(player[decideTurn]->getPlayerIcon());

		if (decideTurn == 0)
			decideTurn = 1;
		else
			decideTurn = 0;

	}
	system("pause");

	delete board;
	delete player[0];
	delete player[1];
	delete begin;
}

//Get help to reset board!!