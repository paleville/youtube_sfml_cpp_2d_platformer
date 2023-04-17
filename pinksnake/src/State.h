#pragma once

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <vector>
#include <stack>
#include <map>

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


class State
{
public:
	sf::RenderWindow* window;
	std::vector<sf::Texture> textures;

	State();
	State(sf::RenderWindow* window);
	virtual ~State();


	virtual void endState() = 0;
	virtual void update(const float& dt) = 0;
	//virtual void render(sf::RenderTarget* target = nullptr) = 0;



};

