#include "introSplash.h"

introSplash::introSplash()
{
}

introSplash::~introSplash()
{
}

void introSplash::loadFiles()
{
	draw(theWindow);

}

void introSplash::update()
{
	

}

void introSplash::draw(sf::RenderWindow* window)
{
	sf::Font font;
	sf::Text myText;

	font.loadFromFile("OLDENGL.TTF");
	myText.setFont(font);
	myText.setString("INTRO");
	myText.setFillColor(sf::Color::Red);
	myText.setPosition(250, 250);

	std::cout << "We are in the INTRO SCREEN" << std::endl;
}
