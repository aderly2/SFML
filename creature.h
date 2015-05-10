//
//  creature.h
//
//
//  Created by Munger Rufus on 2015-05-09.
//
//

#ifndef ____creature__
#define ____creature__

#include <SFML/Graphics.hpp>

#include <iostream>

#include "entity.h"

class creature : public entity
{
private:
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
    creature(); // Default Constructor
    void attack();
    void displayStats();
    void setStats(int hp,int str,int vit,int dex);
};

#endif /* defined(____creature__) */
