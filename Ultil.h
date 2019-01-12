/*
Author: LeVanManh
*/

#pragma once
#include <Windows.h>
#include <iostream>
using namespace std;

#define WINDOW_WIDTH 50
#define WINDOW_HEIGHT 50
#define SNAKE_MAX_SIZE (WINDOW_WIDTH * WINDOW_HEIGHT)

#define KEY_UP 72

#define KEY_DOWN 80

#define KEY_LEFT 75

#define KEY_RIGHT 77


enum GAME_SATE{
	GAME_RUNNING,
	GAME_PAUSE,
	GAME_OVER
};


void	cursorGotoxy(int x, int y);
int		getRandomNumber(int max);
