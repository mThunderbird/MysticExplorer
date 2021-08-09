#include<iostream>

#include "SDL2\include\SDL.h"

#undef main

using namespace std;

int main(int argc, char* argv[])
{
	SDL_Rect test;
	
	test = { 100 , 100 ,100 ,100 }; 

	cout << "hello world"<<"first change";

	return 0;
}