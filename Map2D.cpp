#include "Map2D.h"

Map2D::Map2D()
{
	InitMap();
}


Map2D::~Map2D()
{
}

void Map2D::InitMap()
{
	for (int i = 0; i < WINDOW_HEIGHT; i++)
	{
		for (int j = 0; j < WINDOW_WIDTH; j++)
		{
			if (i>0 && i < WINDOW_HEIGHT - 1 && j >0 && j < WINDOW_WIDTH - 1)
				m_listPoint[i][j] = new Point2D(j, i, ' ');
			else
				m_listPoint[i][j] = new Point2D(j, i, '+');
		}
	}
}

void Map2D::DisplayMap()
{
	for (int i = 0; i < WINDOW_HEIGHT; i++)
	{
		for (int j = 0; j < WINDOW_WIDTH; j++)
		{
			m_listPoint[i][j]->Display();
		}
	}
}
