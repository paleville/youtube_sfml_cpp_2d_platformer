#include<iostream>
#include"windowManager.h"

int main()
{
	windowManager::windowManager();
	windowManager::theWindow();

	windowManager::getinstance().initialize();
	windowManager::getinstance().loadFile();

	return 22;
}