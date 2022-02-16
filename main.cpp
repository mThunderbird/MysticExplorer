#include "Debug\include\GameManager.h"

GameManager gameManger;

int main(int argc, char* argv[])
{
	
	gameManger.init();

	while (gameManger.m_endGame == false)
	{
	
		gameManger.update();

		gameManger.draw();

		SDL_Delay(25);
	}


	return 0;
}