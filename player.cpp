//
//  player.cpp
//
//
//  Created by Munger Rufus on 2015-05-09.
//
//

#include "player.h"

class player
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
    playerAnimationState = 0;
    walkingAnimationLengthCounter = 0;

public:
    player() // Default Constructor
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

    void displayStats()
    {
        cout << "level: " << level << endl;
        cout << "hp: " << hp << endl;
        cout << "str: " << str << endl;
        cout << "vit: " << vit << endl;
        cout << "dex: " << dex << endl;
    }

    void update()
    {
        // Keep sprite at rect
        spritePlayer.setPosition(rect.getPosition());
        spritePlayer.setRotation(rect.getRotation());
    }

    void attack()
    {

    }

    void usePotion()
    {
        hp = hp + 10;
    }

    void changeEquipment()
    {

    }
};
