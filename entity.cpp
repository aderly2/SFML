//
//  entity.cpp
//  
//
//  Created by Munger Rufus on 2015-05-09.
//
//

#include "entity.h"

entity::entity() // Default Constructor
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

void entity::update()
{
    // Keep sprite at rect
    sprite.setPosition(rect.getPosition());
    sprite.setRotation(rect.getRotation());
}
