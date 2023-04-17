#pragma once
#include "gameClass.h"
#include<iostream>

class mainMenuClass :
    public gameClass
{

public:


    sf::RenderWindow* theWindow;

    mainMenuClass();
    ~mainMenuClass();

    void loadFiles();
    void update();
    void draw(sf::RenderWindow* window);
};

