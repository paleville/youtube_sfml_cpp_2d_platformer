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
	currentwindow = new introSplash();

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


