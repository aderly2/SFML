//
//  player.cpp
//  
//
//  Created by Munger Rufus on 2015-05-09.
//
//

#include "player.h"

class player()
{
private:
    sf::Sprite sprite;
    sf::RectangleShape rect;
    int hp = 10;
    int str = 5;
    int vit = 5;
    int dex = 5;
    
public:
    player() // Default Constructor
    {
        
    }
    
    void displayStats()
    {
        cout << "hp: " << hp << endl;
        cout << "str: " << str << endl;
        cout << "vit: " << vit << endl;
        cout << "dex: " << dex << endl;
    }
    
    void move()
    {
        
    }
    
    void attack()
    {
        
    }
    
    void usePotion()
    {
        
    }
    
    void changeEquipment()
    {
        
    }
};