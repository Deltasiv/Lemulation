#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <sstream>

int main()
{
    // Create the main window
    sf::RenderWindow app(sf::VideoMode(800, 600), "SFML window");

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("rocket.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    double angle = 45;

    sf::Vector2f scale(sprite.getScale());
    sprite.setPosition(500, 0);
    sprite.setRotation(angle);
    sprite.setScale(0.2, 0.2);
    sf::Vector2f rocket_position = sprite.getPosition();
    sf::Vector2f rocket_scale = sprite.getScale();

    double rocket_x = rocket_position.x;
    double rocket_y = rocket_position.y;
    double rocket_sizex = rocket_scale.x;
    double rocket_sizey = rocket_scale.y;
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

        angle += 0.1;
        sprite.setRotation(angle);

        // Clear screen
        app.clear();

        // Draw the sprite
        app.draw(sprite);

        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}
