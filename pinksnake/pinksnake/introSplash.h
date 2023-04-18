#pragma once
#include "gameClass.h"
#include<iostream>


class introSplash :
    public gameClass
{
public:


    introSplash();
    ~introSplash();


    sf::RenderWindow* theWindow;

    void loadFiles();
    void update();
    void draw(sf::RenderWindow* window);

};

