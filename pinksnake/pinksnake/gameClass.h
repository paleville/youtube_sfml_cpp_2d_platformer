#pragma once
#include"SFML/Graphics.hpp"

class gameClass
{

public:
	gameClass();
	~gameClass();


	virtual void loadFiles();
	virtual void update();
	virtual void draw(sf::RenderWindow *window);
};

