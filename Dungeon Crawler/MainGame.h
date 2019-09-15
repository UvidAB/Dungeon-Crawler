#pragma once
#include "SDL.h"
#include <stdio.h>
#include <SDL_gesture.h>




class MainGame
{
public:
	MainGame();
	~MainGame();
	//update
	void run();
	//initalization
	void initSystems(char* title, int width, int height, bool fullscreen);
	bool running();

private:
	//Holds pointer to the window
	SDL_Window* window;
	bool is_running = true;
	
};


	//a = 3