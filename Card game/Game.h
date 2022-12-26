#pragma once
#include <iostream>
#include <vector>
#include <random>
#include <Windows.h>

using namespace std;

class Game
{
public:
	char num_s;
	char suit;
	Game(char num_s, char suit);
	friend ostream& operator << (ostream& os, Game& card);
	int Get() { return num_s; };
	int Get_suit() { return (int)suit; };

};

enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};

void SetColor(int text, int background);
