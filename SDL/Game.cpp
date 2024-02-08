#include "Game.h"
#include <iostream>


bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";
		
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
            if (renderer != 0) //renderer init success
            {
                std::cout << "renderer creation success\n";
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				TextureManager::Instance() -> loadTexture("assets/Baby.bmp", "bmp", renderer);
				TextureManager::Instance() -> loadTexture("assets/Heart.bmp", "bmp2", renderer);
				TextureManager::Instance() -> loadTexture("assets/Sprite-Sheet.jpg", "sprite", renderer);

            }
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}
void Game::render() {
	SDL_RenderClear(renderer);
	
	// SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle);//delete
	//single image render
	// TextureManager::Instance() -> drawTexture("bmp", 0, 0, 256, 256, renderer);
	// TextureManager::Instance() -> drawTexture("bmp", 128, 128, 256, 256, renderer, SDL_FLIP_HORIZONTAL);

	// TextureManager::Instance() -> drawTexture("bmp2", 128, 0, 256, 256, renderer);
	// TextureManager::Instance() -> drawTexture("bmp2", 300, 128, 256, 256, renderer, SDL_FLIP_HORIZONTAL);

	// sprite animation
	//currentFrame = 4;
	TextureManager::Instance() -> drawOneFrameFromTexture("sprite", 0, 0, 133, 140, 1, currentFrame, renderer);

	SDL_RenderPresent(renderer);
}
void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;
		}
	}
}
void Game::update() {
}
void Game::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
bool Game::isRunning() {
	return Game::running;
}
Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;
}
Game::~Game() {
}