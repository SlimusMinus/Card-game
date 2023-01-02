#include "Game.h"


Game::Game(int num_s, char suit)
{
	this->num_s = num_s;
	this->suit = suit;
}

ostream& operator<<(ostream& os, Game& card)
{
	if (card.num_s == 11)
		os << 'B' << " " << card.suit;
	else if (card.num_s == 12)
		os << 'D' << " " << card.suit;
	else if (card.num_s == 13)
		os << 'K' << " " << card.suit;
	else if (card.num_s == 14)
		os << 'T' << " " << card.suit; else
		os << card.num_s << " " << card.suit;
	return os;
}

void SetColor(int text, int background)

	{
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
	}

