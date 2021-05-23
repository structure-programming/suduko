#include<SFML\Graphics.hpp>
#include<iostream>
#include <stdio.h>

int main() {
	sf::RenderWindow(sf::VideoMode(512, 512), "suduko project", sf::Style::Close | sf::Style::Resize);
	sf::RectangleShape player(sf::Vector2f(100.2f));
	player.setPosition(206.0f, 206.0f);
	sf::Texture suduko;
	suduko.loadFromFile("suduko.png");
	player.setTexture(&suduko);
	while (window.isOpen()) {

		sf::Event event;
		while (window.pollEvent(event)) {
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}

		}
		window.clear();
		window.draw(player);
		window.display();
	}
	return 0;
}