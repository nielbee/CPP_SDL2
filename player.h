#include<iostream>
#include<SDL/SDL.h>
using namespace std;

class Player{
	SDL_Event input;
	public :
		string nama= "DANI";
		void tombol(){
			SDL_PollEvent(&input){
				switch(event.type){
					case SDL_KEYDOWN:
						cout << &input;
				}
			}
		}
};
