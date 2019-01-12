/*
Author: LeVanManh
*/

#pragma once
#include "Point2D.h"

class Map2D
{
public:
	Map2D();
	~Map2D();
private:
	Point2D *m_listPoint[WINDOW_HEIGHT][WINDOW_WIDTH];

public:
	void DisplayMap();

private:
	void InitMap();
};

