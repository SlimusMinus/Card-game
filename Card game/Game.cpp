#include "Game.h"


Game::Game(char num_s, char suit)
{
	this->num_s = num_s;
	this->suit = suit;
}

ostream& operator<<(ostream& os, Game& card)
{
	if (card.num_s == 10)
	{
		card.num_s = 10;
		os << (int)card.num_s << " " << card.suit;
	}
		
	else
		os << card.num_s << " " << card.suit;
	return os;
}

void SetColor(int text, int background)

	{
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
	}

