#pragma once
#include <list>
#include <vector> 
#include "Exit.h"

const int MSZ = 100;
const int WALL = 1;
const int SPACE = 2;
const int START = 3;
const int PATH = 5;
const int GRAY = 6;
const int BLACK_SPACE = 7;
const int TARGET = 8;
const int EXIT = 21;

const int SOLDIER_BLUEA = 9;
const int SOLDIER_BLUEB = 15;
const int SOLDIER_ORANGEA = 10;
const int SOLDIER_ORANGEB = 16;
const int HEALTH = 11;
const int AMMO = 12;
const int COVER = 13;
const int MARK = 14;

const int TARGET_BLUEA = 17;
const int TARGET_BLUEB = 18;
const int TARGET_ORANGEA = 19;
const int TARGET_ORANGEB = 20;

class Room
{
private:
	int cx, cy, width, height;
	std::vector<Exit> exits;

public:
	Room();
	Room(int row, int col, int w, int h);
	void SetCenterX(int col);
	void SetCenterY(int row);
	void SetWidth(int w);
	void SetHeight(int h);

	int GetCenterX();
	int GetCenterY();
	int GetWidth();
	int GetHeight();
	std::vector<Exit> GetExits();

	void Init(int m[MSZ][MSZ]);
	bool Overlap(int w, int h, int cx, int cy);
	void AddExit(Exit exit);
};

