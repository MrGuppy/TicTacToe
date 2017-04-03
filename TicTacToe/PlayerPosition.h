#pragma once

class PlayerPosition 
{
public:
	PlayerPosition(int turn, char icon);
	~PlayerPosition();
	int Playerturn(char grid[3][3]);
	char getPlayerIcon();
private:
	char playerIcon;
	int playerTurn;
	int input;
	bool positionPlacement = true;

};

