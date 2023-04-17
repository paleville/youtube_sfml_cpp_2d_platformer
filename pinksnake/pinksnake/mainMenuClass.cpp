#include "mainMenuClass.h"

mainMenuClass::mainMenuClass()
{
}

mainMenuClass::~mainMenuClass()
{
}

void mainMenuClass::loadFiles()
{
	draw(theWindow);
}

void mainMenuClass::update()
{
}

void mainMenuClass::draw(sf::RenderWindow* window)
{
	sf::Font font;
	sf::Text myText;

	font.loadFromFile("OLDENGL.TTF");
	myText.setFont(font);
	myText.setString("MAIN_MENU");
	myText.setFillColor(sf::Color::Red);
	myText.setPosition(250, 250);

	std::cout << "We are in the MAIN MENU" << std::endl;

}
