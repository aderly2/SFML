//
//  object.cpp
//
//
//  Created by Munger Rufus on 2015-05-09.
//
//



#include "object.h"

object::object(int objectType, float x, float y) // Default Constructor
{
    // Rect
    rect.setPosition(x, y);
    rect.setOrigin(50,50);
    rect.setSize(sf::Vector2f(100, 100));
    rect.setFillColor(sf::Color::Green);

    // Sprite
    sprite.setOrigin(100,100);
    sprite.setPosition(x, y);
}

void object::update()
{
    // Keep sprite at rect
    spritePlayer.setPosition(rect.getPosition());
    spritePlayer.setRotation(rect.getRotation());
}
