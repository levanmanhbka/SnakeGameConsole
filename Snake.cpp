#include "Snake.h"

Snake::Snake()
{
	m_body[0] = new Point2D(10, 30, ' ');
	m_body[1] = new Point2D(10, 31, 'O');
	m_body[2] = new Point2D(10, 32, 'O');
	m_body[3] = new Point2D(10, 33, 'O');
	m_lenght = 4;
	m_speed = 100;
	m_direction = 'w';
}


Snake::~Snake()
{
	for (int i = 0; i < m_lenght; i++)
		delete[] m_body[i];
}

void Snake::Display()
{
	for (int i = 0; i < m_lenght; i++)
	{
		m_body[i]->Display();
	}
}

void Snake::TurnUp()
{
	m_direction = 'w';
}

void Snake::TurnDown()
{
	m_direction = 'z';
}

void Snake::TurnLeft()
{
	m_direction = 'a';
}

void Snake::TurnRight()
{
	m_direction = 'd';
}

void Snake::Move()
{
	Sleep(m_speed);
	for (int i = 0; i < m_lenght - 1; i++)
	{
		m_body[i]->SetX(m_body[i + 1]->GetX());
		m_body[i]->SetY(m_body[i + 1]->GetY());
	}

	switch (m_direction)
	{
	case 'w':
		m_body[m_lenght - 1]->MoveUp();
		break;

	case 'z':
		m_body[m_lenght - 1]->MoveDown();
		break;

	case 'a':
		m_body[m_lenght - 1]->MoveLeft();
		break;

	case 'd':
		m_body[m_lenght - 1]->MoveRight();
		break;

	default:
		break;
	}
}

int Snake::Catch(Worm *worm)
{
	switch (m_direction)
	{
	case 'w':
		if (m_body[m_lenght - 1]->GetY() - 1 == worm->GetY()
			&& m_body[m_lenght - 1]->GetX() == worm->GetX())
		{
			m_body[m_lenght] = new Point2D(worm->GetX(), worm->GetY());
			m_lenght = m_lenght + 1;
			worm->Hurted();
		}
		break;

	case 'z':
		if (m_body[m_lenght - 1]->GetY() + 1 == worm->GetY()
			&& m_body[m_lenght - 1]->GetX() == worm->GetX())
		{
			
			m_body[m_lenght] = new Point2D(worm->GetX(), worm->GetY());
			m_lenght = m_lenght + 1;
			worm->Hurted();
		}
		break;

	case 'a':
		if (m_body[m_lenght - 1]->GetX() - 1 == worm->GetX()
			&& m_body[m_lenght - 1]->GetY() == worm->GetY())
		{
			
			m_body[m_lenght] = new Point2D(worm->GetX(), worm->GetY());
			m_lenght = m_lenght + 1;
			worm->Hurted();
		}
		break;

	case 'd':
		if (m_body[m_lenght - 1]->GetX() + 1 == worm->GetX()
			&& m_body[m_lenght - 1]->GetY() == worm->GetY())
		{
			m_body[m_lenght] = new Point2D(worm->GetX(), worm->GetY());
			m_lenght = m_lenght + 1;
			worm->Hurted();
		}
		break;
	}
	return 0;
}