#include "Floor.h"

Floor initfloor(int SWidth, int SHeight)
{

	Floor newfloor;

	newfloor.height = SHeight - 30;
	newfloor.Size.x = SWidth;
	newfloor.Size.y = SHeight / 2;

}