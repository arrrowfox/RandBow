#include <SDL2/SDL.h> 
#include <iostream>
#include<fstream>
#include <math.h>
#include "sprites.h"
const Uint8* keys = SDL_GetKeyboardState(NULL);

int bored[50][50];
int newbored[50][50];


int ce[1000];
int cepo = 0;

int mousx, mousy;

bool onset = false;

bool bom = true;
bool bomset = false;

int col = 1;

bool cli = false;
bool cliset = false;
int main(int argc, char** argv)
{
	
	bool quit = false;

	SDL_Event event;
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window* window = SDL_CreateWindow("FoxBox",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 950, 950, 0);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
	while (!quit)
	{
		
		SDL_Delay(30);
		SDL_PollEvent(&event);

		switch (event.type)
		{
		case SDL_QUIT:
			quit = true;
			break;
		}
		if (keys[SDL_SCANCODE_ESCAPE])
		{
			quit = true;
			break;
		}

		SDL_SetRenderDrawColor(renderer, 23, 18, 36, 255);
		SDL_RenderClear(renderer);

		if (!quit)
		{

			SDL_GetMouseState(&mousx, &mousy);
			if(keys[SDL_SCANCODE_Q] && !onset){
				for (int y = 0; y < 19; ++y)
				{
					for (int x = 0; x < 19; ++x)
					{
						switch (bored[x][y]){
							case 1:
								ce[cepo]++;
								break;
							case 2:
								ce[cepo]--;
								break;
							case 3:
								x += ce[cepo];
								while (x>19)
								{
									x -= 19;
									y++;
								}
								break;
							case 4:
								cout << char(ce[cepo]);
								break;
							case 5:
								cout << int(ce[cepo]);
								break;
							case 6:
								char buf;
								scanf ("%c",&buf);
								getchar();
								ce[cepo]=buf;
								break;
							case 7:
								ce[cepo+1]=ce[cepo];
								break;
							case 8:
								cepo--;
								break;
							case 9:
								cepo++;
								break;
						}
					}
				}
				cout << "\n\n----------------\ndone\n----------------\n\n";
				onset = true;
			}else if (!keys[SDL_SCANCODE_Q])
			{
				onset = false;
			}
			for (int i = 0; i < 20; ++i)
				{
					for (int b = 0; b < 20; ++b)
					{
						drawpix(renderer, bored[b][i], b*50, i*50);
					}
			}
			if (keys[SDL_SCANCODE_W] && !bomset)
			{
				col--;
				if (col == -1)
				{
					col= 9;
				}
				bomset = true;
			}else if (keys[SDL_SCANCODE_E] && !bomset)
			{
				col++;
				if (col == 10)
				{
					col= 0;
				}
				bomset = true;
			}else if(!keys[SDL_SCANCODE_E] && !keys[SDL_SCANCODE_W]){
				bomset = false;
			}
			drawpix(renderer, col, round(mousx / 50) * 50, round(mousy / 50) * 50);

			if(SDL_GetMouseState(NULL, NULL) && SDL_BUTTON(SDL_BUTTON_LEFT) && !cliset){
				bored[int(round(mousx / 50))][int(round(mousy / 50))] = col;
				cliset = true;
			}
			else if (!SDL_GetMouseState(NULL, NULL) && SDL_BUTTON(SDL_BUTTON_LEFT))
			{
				cliset = false;
			}
			
			SDL_RenderPresent(renderer);
			
		}
		
	}
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	
	SDL_Quit();
	return 0;
}