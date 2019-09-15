#include "MainGame.h"

//Contructer
MainGame::MainGame()
{
	window = nullptr;
}

//Destructor
MainGame::~MainGame()
{
}

//Update system
void MainGame::run() {
	
}

void MainGame::initSystems(char* title, int width, int height, bool fullscreen) {
	//Initialize SDL
	SDL_Init(SDL_INIT_EVERYTHING);

	window = SDL_CreateWindow(title,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		width,
		height,
		fullscreen)
}

