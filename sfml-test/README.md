# SFML Library test (Graphics and Text)

## Install

### Ubuntu

`apt-get install libsfml-dev build-essential`

## Example

```
#include <SFML/Graphics.hpp>

int main(int argc, char const *argv[])
{
    sf::RenderWindow window(sf::VideoMode(200,200), "Hello From SFML");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Magenta);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.display();
        
    }

    return 0;
}
```

## Compile

```
g++ -c ./sfmltest.cpp 
g++ sfmltest.o -o app -lsfml-graphics -lsfml-window -lsfml-system
```

## Sources

[Simple and Fast Multimedia Library - Audio 2D Network](https://www.sfml-dev.org/)
[How to install SFML in ubuntu?](https://stackoverflow.com/questions/30696114/how-to-install-sfml-in-ubuntu)

## Other Sources

[How can you animate a sprite in SFML](https://stackoverflow.com/questions/2684938/how-can-you-animate-a-sprite-in-sfml)
[SFML C++ Tutorial–Spritesheets and Animation](https://gamefromscratch.com/sfml-c-tutorial-spritesheets-and-animation/)
[HOW TO DO REAL ANIMATION IN C++ SFML](https://en.sfml-dev.org/forums/index.php?topic=20352.0)
