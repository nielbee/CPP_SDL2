#include <SDL2/SDL.h>
#include <stdio.h>
#include <iostream>
#include "renderer.h"

using namespace std;

int main()
{	Renderer game;
	game.render(800,600);
	bool run = true;
	
	
	while (run){
		//event driven / user input
		while(SDL_PollEvent(&game.winEvent) != 0){
			if(game.winEvent.type == SDL_QUIT){
				cout << "exiting game\n";
				run = false;
				break;
			}else if (game.winEvent.type == SDL_KEYDOWN){
				//print code
				//cout << (game.winEvent.key.keysym.sym) << "\n";
				if (game.winEvent.key.keysym.sym == 119){
					// w button
					cout << "up\n";
				}else if (game.winEvent.key.keysym.sym == 97){
					//a button
					cout << "left\n";
				}else if (game.winEvent.key.keysym.sym == 115) {
					//s button
					cout<<"down\n";
				}else if (game.winEvent.key.keysym.sym == 100){
					//d button
					cout <<"rigth\n";
				}
			}
				
		}
	}
	return 0;
}
	
	

