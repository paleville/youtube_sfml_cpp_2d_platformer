#pragma once
#include"gameClass.h"
#include"introSplash.h"
#include"mainMenuClass.h"
class windowManager
{
public:

	windowManager();
	~windowManager();
	windowManager(windowManager const&);

	static windowManager& getinstance();


	sf::RenderWindow* window;

	gameClass* currentwindow, *nextwindow;

	void addscreen(gameClass *screen);

	void initialize();
	void loadFile();
	void update();
	void draw(sf::Window *window);

	static void theWindow();




};

