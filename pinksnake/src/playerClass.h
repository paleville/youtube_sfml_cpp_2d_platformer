#pragma once
#include "entityClass.h"
#include "GameState.h"

class playerClass :
    public entityClass
{

public:     

    
    playerClass(); //NEW
    
    bool goRight;
    void input(float dt);
    void update(float dt);
    void collision(int direction);
    void drawPlayer(std::string texDirectory, sf::Sprite e_sprite, sf::Texture& texture, sf::RenderWindow& p_window); //NEW
   

    

};

