//
//  creature.cpp
//  
//
//  Created by Munger Rufus on 2015-05-09.
//
//

#include "creature.h"

creature::creature() // Default Constructor
{
    // Rect
    rect.setPosition(100, 100);
    rect.setOrigin(50,50);
    rect.setSize(sf::Vector2f(100, 100));
    rect.setFillColor(sf::Color::Green);
    
    // Sprite
    sprite.setOrigin(100,100);
    sprite.setPosition(100, 100);
}

void creature::displayStats()
{
    std::cout << "level: " << level << std::endl;
    std::cout << "hp: " << hp << std::endl;
    std::cout << "str: " << str << std::endl;
    std::cout << "vit: " << vit << std::endl;
    std::cout << "dex: " << dex << std::endl;
}

void creature::attack()
{
    
}

void creature::setStats(int hp,int str,int vit,int dex)
{
    this->hp = hp;
    this->str = str;
    this->vit = vit;
    this->dex = dex;
}