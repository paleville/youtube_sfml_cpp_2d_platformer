#pragma once
#include "State.h"
#include "entityClass.h"
#include "playerClass.h"



class GameState : public State
{
public:
	GameState();
	GameState(sf::RenderWindow* window);
	virtual ~GameState();



	void endState() override;
	void update(const float& dt) override;
	void render(sf::RenderWindow* window);


	inline static int i;
	inline static int j;

	static const int H = 23;
	static const int W = 80 / 2;
	static const std::string map[H];


	entityClass ent;
	

};

