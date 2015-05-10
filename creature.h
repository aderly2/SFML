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
<<<<<<< HEAD
    creature(); // Default Constructor
    void attack();
    void displayStats();
=======
    void creature(); // Default Constructor
    void attack();
    void setStats();
>>>>>>> 97ad295115030e78f836a69f2460b1e81f62f47c
};

#endif /* defined(____creature__) */
