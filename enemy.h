//
//  enemy.h
//
//
//  Created by Munger Rufus on 2015-05-09.
//
//

#ifndef ____enemy__
#define ____enemy__

#include <SFML/Graphics.hpp>

#include <iostream>

class enemy
{
private:
    sf::Sprite sprite;
    sf::RectangleShape rect;

    // Stats
    int level = 1;
    int hp = 10;
    int str = 5;
    int vit = 5;
    int dex = 5;

    // Animation
    int playerAnimationState = 0;
    int walkingAnimationLengthCounter = 0;

public:
    enemy(); // Default Constructor
    void displayStats();
    void update();
    void attack();
    void usePotion();
};
#endif /* defined(____enemy__) */
