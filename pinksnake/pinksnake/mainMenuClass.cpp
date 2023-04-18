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
	myText.setFillColor(sf::Color::Yellow);
	myText.setPosition(250, 250);


	sf::RenderWindow theWindow(sf::VideoMode(500, 500), "sfml_screen");

	while (theWindow.isOpen())
	{
		sf::Event ev;


		while (theWindow.pollEvent(ev))
		{
			if (ev.type == sf::Event::Closed)
			{
				theWindow.close();
			}
		}

		theWindow.clear(sf::Color::Cyan);
		theWindow.draw(myText);
		theWindow.display();
	}

	std::cout << "We are in the MAIN MENU" << std::endl;

}
