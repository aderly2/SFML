//
//  object.h
//
//
//  Created by Munger Rufus on 2015-05-09.
//
//

#ifndef ____object__
#define ____object__

#include <SFML/Graphics.hpp>

class object
{
protected:
    sf::Sprite sprite;
    sf::RectangleShape rect;

public:
    object(int objectType, float x, float y);

    void update();

};

#endif /* defined(____object__) */
