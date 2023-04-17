#include "windowManager.h"

windowManager::windowManager()
{
}

windowManager::~windowManager()
{
}

windowManager::windowManager(windowManager const&)
{
}

windowManager& windowManager::getinstance()
{
	static windowManager instance;
	return instance;
}

void windowManager::addscreen(gameClass* screen)
{
	nextwindow = screen;
	currentwindow = nextwindow;
	currentwindow->loadFiles();


}

void windowManager::initialize()
{
	currentwindow = new gameClass();

}

void windowManager::loadFile()
{
	currentwindow->loadFiles();
}

void windowManager::update()
{
	currentwindow->update();
}

void windowManager::draw(sf::Window* window)
{
	currentwindow->draw(this->window);
}

void windowManager::theWindow()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "sfml_screen");

	while (window.isOpen())
	{
		sf::Event ev;

		while (window.pollEvent(ev))
		{
			if (ev.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();
		window.display();
	}

}
