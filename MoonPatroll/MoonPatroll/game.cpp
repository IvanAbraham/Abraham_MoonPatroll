#include "game.h"
#include "Refresh.h"
#include "player.h"

void initgame()
{

	int screenWidth = 800;
	int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "MoonPatroll");
	Player vehicle;	
	vehicle = initplayer(screenWidth, screenHeight);

	while (!WindowShouldClose())
	{

		if (IsKeyDown('W'))
		{

			vehicle.position.y += 30;

		}

		refreshscreen(vehicle.position);

	}

}