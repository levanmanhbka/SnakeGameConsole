#include "Point2D.h"

Point2D::Point2D(int x, int y, char color)
{
	this->x = x;
	this->y = y;
	this->color = color;
}

Point2D::~Point2D()
{
}

void Point2D::SetX(int x)
{
	this->x = x;
}

void Point2D::SetY(int y)
{
	this->y = y;
}

int	 Point2D::GetX()
{
	return x;
}

int  Point2D::GetY()
{
	return y;
}

void Point2D::MoveUp()
{
	if (y > 1)
		y = y - 1;
}

void Point2D::MoveDown()
{
	if (y < WINDOW_HEIGHT - 2)
		y = y + 1;
}

void Point2D::MoveLeft()
{
	if (x > 1)
		x = x - 1;
}

void Point2D::MoveRight()
{
	if (x < WINDOW_WIDTH - 2)
		x = x + 1;
}

void Point2D::Display()
{
	cursorGotoxy(this->x, this->y);
	cout << this->color;
}

void Point2D::Clean()
{
	cursorGotoxy(this->x, this->y);
	cout << " ";
}

void Point2D::Debug()
{
	cursorGotoxy(this->x, this->y);
	cout << this->color << " (" << this->x << "," << this->y << ")";
}
