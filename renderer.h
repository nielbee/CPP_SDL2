#include<SDL2/SDL.h>
#include<iostream>

using namespace std;

class Renderer{
	public: 
	SDL_Window *window = NULL; 
	SDL_Event winEvent;
	SDL_Surface *screen = NULL;
	
	
	void render(int x,int y){
	
		if(SDL_Init(SDL_INIT_VIDEO) < 0){
			std::cout << "Failed to initialize the SDL2 library\n";
		}else{
			cout << "sukses\n";
			window = SDL_CreateWindow("Judul",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, x, y, SDL_WINDOW_SHOWN);
			screen = SDL_GetWindowSurface(window);
		}
	}
	


};

