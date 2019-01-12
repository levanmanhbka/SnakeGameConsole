/*
Author: LeVanManh
*/

#pragma once
#include "Point2D.h"
#include "Worm.h"

class Snake
{
public:
	Snake();
	~Snake();
public:
	void	Move();
	int		Catch(Worm *worm);
	void	TurnUp();
	void	TurnDown();
	void	TurnLeft();
	void	TurnRight();
	void	Display();
private:
	Point2D*	m_body[SNAKE_MAX_SIZE];
	int			m_lenght;
	char		m_direction;
	int			m_speed;
};

