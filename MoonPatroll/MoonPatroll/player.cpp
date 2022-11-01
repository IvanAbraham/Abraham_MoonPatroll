#include "player.h"
#include "Floor.h"

Player initplayer(int SWidth, int SHeight)
{

	Floor Terrain;
	Player newplayer;

	newplayer.size.y = SHeight / 8;
	newplayer.size.x = SHeight / 8;
	newplayer.position.y = Terrain.height + newplayer.size.y;
	newplayer.position.x = SWidth + 10;

	return newplayer;

}