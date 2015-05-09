//
//  entity.h
//  
//
//  Created by Munger Rufus on 2015-05-09.
//
//

#ifndef ____entity__
#define ____entity__

#include <SFML/Graphics.hpp>
#include <iostream>

class entity
{
private:
    sf::Sprite sprite;
    sf::RectangleShape rect;
    
public:
    enemy(); // Default Constructor
    void update(); // Keep sprite and rect together
};

#endif /* defined(____entity__) */
