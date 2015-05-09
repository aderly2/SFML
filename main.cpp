#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <random>
#include <cmath>
#include <vector>
#include <unistd.h>
#include <iostream>
using namespace std;
#include "player.h"
#include "enemy.h"
#include "object.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~ RANDOM FUNCTION ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int generateRandom(int max)
{
    int randomNumber = rand();
    float random = (randomNumber % max) + 1;
    int myRandom = random;
    return myRandom;
}

int main(int, char const**)
{
    // Player Object
    player player;
    
    // Enemy Vector Array (Stores Enemy Objects)
    class enemy enemyArray;
    vector<enemy>::const_iterator iter;
    std::vector<enemy> theEnemyArray;
    
    // Object Vector Array (Stores Objects On The Ground)
    class object objectArray(0);
    vector<object>::const_iterator iter2;
    std::vector<object> theObjectArray;
    
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Rogue-Like RPG 1.00");

    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile("resources/icon.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("resources/cute_image.jpg")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);

    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile("resources/sansation.ttf")) {
        return EXIT_FAILURE;
    }
    sf::Text text("Hello SFML", font, 50);
    text.setColor(sf::Color::Black);

    // Load a music to play
    sf::Music music;
    if (!music.openFromFile("resources/nice_music.ogg")) {
        return EXIT_FAILURE;
    }

    // Play the music
    //music.play();

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        window.clear();
        
        
        // Player Vector Movement
        float tempXSize = window.getSize().x;
        float tempYSize = window.getSize().y;
        sf::Vector2i localPosition = sf::Mouse::getPosition(window);
        sf::Vector2f worldPos = window.mapPixelToCoords(localPosition);
        float mx = (worldPos.x)/tempXSize;
        float my = (worldPos.y)/tempYSize;
        float x = (player.rect.getPosition().x)/tempXSize;
        float y = (player.rect.getPosition().y)/tempYSize;
        float difx = mx - x;
        float dify = my - y;
        dify = dify * -1;
        float angle = atan2(difx,dify) * (180/3.1415);
        player.rect.setRotation(angle);
        
        if (playerCanMove == true)
        {
            // PLAYER MOVEMENT (WASD)
            float movementSpeed = player.movementSpeed;
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                player.rect.move(0,-movementSpeed);
                player.playerAnimationState = 1; // Move Up
                player.walkingAnimationLengthCounter = 0;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            {
                player.rect.move(-movementSpeed,0);
                player.playerAnimationState = 1; // Move Left
                player.walkingAnimationLengthCounter = 0;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                player.rect.move(0,movementSpeed);
                player.playerAnimationState = 1; // Move Down
                player.walkingAnimationLengthCounter = 0;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            {
                player.rect.move(movementSpeed,0);
                player.playerAnimationState = 1; // Move Right
                player.walkingAnimationLengthCounter = 0;
            }
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // Draw Player
        window.draw(player);
        
        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
