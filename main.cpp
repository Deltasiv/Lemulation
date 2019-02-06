#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <sstream>

int main()
{
    // Create the main window
    int width = 800;
    int height = 600;
    sf::RenderWindow app(sf::VideoMode(width, height), "SFML window");

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("rocket.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    double angle = 45;
    double positionX = 500;
    double positionY = 200;

    sf::Vector2f scale(sprite.getScale());
    sprite.setPosition(positionX, positionY);
    sprite.setRotation(angle);
    sprite.setScale(0.15, 0.15);
    sf::Vector2f rocket_position = sprite.getPosition();
    sf::Vector2f rocket_scale = sprite.getScale();

    double rocket_x = rocket_position.x;
    double rocket_y = rocket_position.y;
    double rocket_sizex = rocket_scale.x;
    double rocket_sizey = rocket_scale.y;

    double speedX = 0.5;
    double speedY = 0.5;

    std::string output = "X: " + std::to_string(rocket_x) + " Y: " + std::to_string(rocket_y);
    std::string outputscale = "X: " + std::to_string(rocket_sizex) + " Y: " + std::to_string(rocket_sizey);

    std::cout << "Position: " + output << std::endl;
    std::cout << "Scale: " + outputscale << std::endl;

	// Start the game loop
    while (app.isOpen())
    {
        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app.close();
        }

        // Animation & Physics

        // Fixedangle is for collision detection based on the angle the rocket is in
        double fixedangle = angle;
        if(angle >= 180){
            fixedangle = angle - 180;
        }

//        angle += 0.1;
//        sprite.setRotation(angle);
//        sprite.setPosition(200, 200);
        if(positionX <= 40 + fixedangle || positionX >= width - 10){
        // Changing the velocity of the rocket as soon as it hits a corner
            speedX = -speedX;
        }
        if(positionY <= 0 || positionY >= height - 100){
            speedY = -speedY;
        }
        positionX += speedX;
        positionY += speedY;
        // Setting the new position of the space ship
        sprite.setPosition(positionX, positionY);
        sf::Vector2f rocket_position = sprite.getPosition();
        double rocket_x = rocket_position.x;
        double rocket_y = rocket_position.y;
        std::string output = "X: " + std::to_string(rocket_x) + " Y: " + std::to_string(rocket_y);
        std::cout << output << "\n";

        // Clear screen
        app.clear();

        // Draw the sprite
        app.draw(sprite);

        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}
