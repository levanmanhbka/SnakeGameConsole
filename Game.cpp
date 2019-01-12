#include "Game.h"
#include <conio.h> 

Game::Game()
{
	m_state = GAME_RUNNING;
	m_map = new Map2D();
	m_worm = new Worm();
	m_snake = new Snake();
}


Game::~Game()
{
	delete m_map;
	delete m_worm;
	delete m_snake;
}

void Game::InitGame()
{
	m_map->DisplayMap();
	m_worm->Display();
	m_snake->Display();

	GameLoop();
}

void Game::GameLoop()
{
	while (true)
	{
		GetControlEvent();
		if (m_state == GAME_RUNNING)
		{
			ProcessEvent();
		}
		UpdateGUI();
		
		if (m_state == GAME_OVER)
		{
			break;
		}
	}
}

void Game::GetControlEvent()
{
	if (_kbhit() == false)
		return;
	char ch = _getch();
	
	switch (ch)
	{
	case KEY_UP:
	case 'w':
	case 'W':
		m_snake->TurnUp();
		break;

	case KEY_DOWN:
	case 'z':
	case 'Z':
		m_snake->TurnDown();
		break;

	case KEY_LEFT:
	case 'a':
	case 'A':
		m_snake->TurnLeft();
		break;

	case KEY_RIGHT:
	case 'd':
	case 'D':
		m_snake->TurnRight();
		break;

	case VK_SPACE:
		if (m_state == GAME_RUNNING)
			m_state = GAME_PAUSE;
		else if (m_state == GAME_PAUSE)
			m_state = GAME_RUNNING;
		break;

	default:
		break;
	}
}

void Game::ProcessEvent()
{
	m_snake->Move();
	m_score = m_score + m_snake->Catch(m_worm);
}

void Game::UpdateGUI()
{
	m_worm->Display();
	m_snake->Display();
}