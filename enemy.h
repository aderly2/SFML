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

#include "creature.h"

class enemy : public creature
{
public:
    enemy(); // Default Constructor
    void aiMovement();
};

#endif /* defined(____enemy__) */
