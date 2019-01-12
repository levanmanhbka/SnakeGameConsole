#include "Worm.h"


Worm::Worm()
{
	m_position = new Point2D(getRandomNumber(WINDOW_WIDTH - 1) + 1, getRandomNumber(WINDOW_HEIGHT -1), 'x');
	m_bVisiable = true;
}


Worm::~Worm()
{
	delete m_position;
}


void Worm::Display()
{
	if (m_bVisiable == true)
	{
		m_position->Display();
	}
}

void Worm::Move()
{
	m_position->SetX(getRandomNumber(WINDOW_WIDTH - 1));
	m_position->SetY(getRandomNumber(WINDOW_HEIGHT - 1));
}

void Worm::Hurted()
{
	Hide();
	Move();
	Visiable();
}

void Worm::Hide()
{
	m_bVisiable = false;
}

void Worm::Visiable()
{
	m_bVisiable = true;
}

bool Worm::GetIsHide()
{
	return m_bVisiable;
}

int	Worm::GetX()
{
	return m_position->GetX();
}

int	 Worm::GetY()
{
	return m_position->GetY();
}