/*
Author: LeVanManh
*/

#pragma once
#include "Ultil.h"

class Point2D
{
public:
	Point2D(int x = 0, int y = 0, char color = '#');
	~Point2D();

private:
	int x;
	int y;
	char color;

public:
	void SetX(int x);
	void SetY(int y);
	int	 GetX();
	int  GetY();

	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();
	
	void Display();
	void Clean();
	void Debug();
};

