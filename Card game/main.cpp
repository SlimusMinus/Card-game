#include "Game.h"

int main()
{
	system("color F0");
	srand(time(NULL));
	int _size = 10;
	vector <Game> p1, p2;
	vector <Game> deck{ Game(10, 3), Game(10, 4), Game(10, 5), Game(10, 6), Game(6, 3), Game(6, 4), Game(6, 5), Game(6, 6),
	Game(7, 3), Game(7, 4), Game(7, 5), Game(7, 6), Game(8, 3), Game(8, 4), Game(8, 5), Game(8, 6), Game(9, 3), Game(9, 4), Game(9, 5), Game(9, 6),
	Game(11, 3), Game(11, 4), Game(11, 5), Game(11, 6),Game(12, 3), Game(12, 4), Game(12, 5), Game(12, 6),
	Game(13, 3), Game(13, 4), Game(13, 5), Game(13, 6),Game(14, 3), Game(14, 4), Game(14, 5), Game(14, 6)};
	
	
	random_shuffle(deck.begin(), deck.end());
	for (int i = 35; i > 17; i--)
	{
		p1.push_back(deck[i]);
		deck.pop_back();
	}
	cout << "\t\t\tCard 1 player" << endl;

	for (int i = 0; i < p1.size(); i++)
	{
		if (p1[i].Get_suit() == 3 || p1[i].Get_suit() == 4)
			SetColor(4, 15);
		else
			SetColor(0, 15);
		cout << p1[i] << " ";
		SetColor(0, 15);

	}
	cout << endl << endl;
	
	cout << "\t\t\tCard 2 player" << endl;
	p2.swap(deck);
	for (int i = 0; i < p2.size(); i++)
	{
		if (p2[i].Get_suit() == 3 || p2[i].Get_suit() == 4)
			SetColor(4, 15);
		else
			SetColor(0, 15);
		cout << p2[i] << " ";
		SetColor(0, 15);
	}

	cout << endl << endl;
	cout << "\t\t\tLet's begin?" << endl << endl;
	system("pause");
	system("cls");

	for (int i = 0; i < _size; i++)
	{
		SetColor(0, 15);
		cout << "card 1 player - ";
		if(p1[i].Get_suit() == 3 || p1[i].Get_suit() == 4)
			SetColor(4, 15);
		else
			SetColor(0, 15);
		cout << p1[i];
		SetColor(0, 15);
		cout << "\tcard 2 player - ";
		if (p2[i].Get_suit() == 3 || p2[i].Get_suit() == 4)
			SetColor(4, 15);
		else
			SetColor(0, 15);
		cout << p2[i] << endl;
		SetColor(0, 15);
		if (p1[i].Get() > p2[i].Get())
		{
			cout << "\t\tPlayer 1 win" << endl;
			p1.push_back(p2[i]);
			p2.erase(p2.begin());
		}
		else if (p2[i].Get() > p1[i].Get())
		{
			cout << "\t\tPlayer 2 win" << endl;
			p2.push_back(p1[i]);
			p1.erase(p1.begin());
		}
		else if (p1[i].Get() == p2[i].Get())
		{
			cout << "\t\tResults are equal" << endl;
			p1.push_back(p1[i]);
			p2.push_back(p2[i]);
		}
		system("pause");
	
	}
	system("cls");

	cout << "After " << _size << " moves" << endl;
	cout << "Player 1 have " << p1.size() << " card" << endl;
	cout << "Player 2 have " << p2.size() << " card" << endl;
	if (p1.size() > p2.size())
		cout << "\n\n          Player 1 win!!!!!!!!" << endl;
	else if (p1.size() < p2.size())
		cout << "\t\t          Player 2 win!!!!!!!!" << endl;
	else if (p1.size() == p2.size())
		cout << "\t\t          Friendship won!!!!" << endl;
}