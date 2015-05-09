//
//  enemy.cpp
//
//
//  Created by Munger Rufus on 2015-05-09.
//
//

#include "enemy.h"

enemy::enemy() // Default Constructor
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

void enemy::displayStats()
{
    std::cout << "level: " << level << std::endl;
    std::cout << "hp: " << hp << std::endl;
    std::cout << "str: " << str << std::endl;
    std::cout << "vit: " << vit << std::endl;
    std::cout << "dex: " << dex << std::endl;
}

void enemy::update()
{
    // Keep sprite at rect
    sprite.setPosition(rect.getPosition());
    sprite.setRotation(rect.getRotation());
}

void enemy::attack()
{

}

void enemy::usePotion()
{
    hp = hp + 10;
}
