#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// https://www.sfml-dev.org/tutorials/2.5/window-window.php

int main()
{
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(1920, 1080, desktop.bitsPerPixel), "SFML window", sf::Style::Fullscreen);
    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("cute_image.jpg"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);
    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile("arial.ttf"))
        return EXIT_FAILURE;
    sf::Text text("Hello SFML", font, 50);
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Clear screen
        window.clear();
        // Draw the sprite
        window.draw(sprite);
        // Draw the string
        window.draw(text);
        // Update the window
        window.display();
    }
    return EXIT_SUCCESS;
}


