// Demonstrate creating a spritesheet
#include "SFML/Graphics.hpp"

int main(int argc, char ** argv){
  sf::RenderWindow renderWindow(sf::VideoMode(87, 400), "Demo Game");

  sf::Event event;
  sf::Texture texture;
  texture.loadFromFile("sprites.jpg");

  sf::IntRect rectSourceSprite(0, 0, 523, 200);
  sf::Sprite sprite(texture, rectSourceSprite);
  sf::Clock clock;

  rectSourceSprite.top = 30;
  rectSourceSprite.left = 10;

  while (renderWindow.isOpen()){
    while (renderWindow.pollEvent(event)){
      if (event.type == sf::Event::EventType::Closed)
        renderWindow.close();
    }

    if (clock.getElapsedTime().asSeconds() > 0.01f){
      if (rectSourceSprite.left >= (523 - 87))
        rectSourceSprite.left = 10;
      else
        rectSourceSprite.left += 87;

      sprite.setTextureRect(rectSourceSprite);
      clock.restart();
    }

    
    renderWindow.clear();
    renderWindow.draw(sprite);
    renderWindow.display();
  }
}