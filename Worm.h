/*
Author: LeVanManh
*/

#pragma once
#include "Point2D.h"

class Worm
{
public:
	Worm();
	~Worm();

public:
	void Hurted();
	bool GetIsHide();
	void Display();
	int	 GetX();
	int	 GetY();

private:
	void Hide();
	void Move();
	void Visiable();

private:
	Point2D*	m_position;
	bool		m_bVisiable;
};

