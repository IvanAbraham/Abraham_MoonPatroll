#pragma once
#include <raylib.h>

struct Floor
{

	int height;
	Vector2 Size;

};

Floor initfloor(int SWidth, int SHeight);

Floor floor;
