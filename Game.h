/*
Author: LeVanManh
*/

#pragma once
#include "Map2D.h"
#include "Worm.h"
#include "Snake.h"

class Game
{
public:
	Game();
	~Game();

public:
	void	InitGame();

public:
	void	GameLoop();
	void	GetControlEvent();
	void	ProcessEvent();
	void	UpdateGUI();

private:
	Map2D*		m_map;
	Worm*		m_worm;
	Snake *		m_snake;
	int			m_score;
	GAME_SATE	m_state;
};

