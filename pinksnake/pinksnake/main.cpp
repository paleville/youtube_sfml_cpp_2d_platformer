#include<iostream>
#include"windowManager.h"

int main()
{
	windowManager::windowManager();
	

	windowManager::getinstance().initialize();
	windowManager::getinstance().loadFile();

	//windowManager::theWindow();

	return 22;
}