#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <sstream>

int main()
{
    // Create the main window
    int width = 800;
    int height = 600;
    sf::RenderWindow app(sf::VideoMode(width, height), "Lemulation");

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("rocket.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    double angle = 45;
    double positionX = 500;
    double positionY = 100;

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
    double gravity = 0.01;
    double friction = 0.90;

    bool frictioncheck = false;

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
            if (event.type == sf::Event::Resized)
            {
                // update the view to the new size of the window
                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
                app.setView(sf::View(visibleArea));
            }
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
        bool localfrictioncheck = false;
        if(positionX <= 40 + fixedangle || positionX >= width - 10){
        // Changing the velocity of the rocket as soon as it hits a corner
            if(!frictioncheck){
                speedX = -speedX * friction;
                // frictioncheck = true;
            }else{
                speedX = -speedX;
            }
            // speedX = -speedX;
            localfrictioncheck = true;
        }
        if(positionY <= 0 || positionY >= height - 100){
            if(!frictioncheck){
                speedY = -speedY * friction;
                speedX = speedX * friction;
                frictioncheck = true;
            }
            localfrictioncheck = true;
        }else{
            speedY += gravity;
        }

        if(!localfrictioncheck && frictioncheck){
            frictioncheck = false;
        }

        // This fixes the bug of the rocket going out of the screen for some reason...
        if(positionY >= height - 98){
            speedY = -speedY * friction;
            speedX = -speedX * friction;
        }

        positionX += speedX;
        positionY += speedY;
        // Setting the new position of the space ship
        sprite.setPosition(positionX, positionY);
        sf::Vector2f rocket_position = sprite.getPosition();
        double rocket_x = rocket_position.x;
        double rocket_y = rocket_position.y;
        std::string output = "X: " + std::to_string(rocket_x) + " Y: " + std::to_string(rocket_y);
        std::string output2 = "\nSpdX: " + std::to_string(speedX) + " SpdY: " + std::to_string(speedY);
        std::cout << output << "\n";
        std::cout << output2 << "\n";

        // Clear screen
        sf::Color backgroundcolor = sf::Color(224,224,224, 255);
        app.clear(backgroundcolor);

        // Draw the sprite
        app.draw(sprite);

        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}
