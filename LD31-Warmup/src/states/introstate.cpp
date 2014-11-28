#include "introstate.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

IntroState* IntroState::_instance;

IntroState* IntroState::instance(){
	if(_instance == NULL) _instance = new IntroState();
	return _instance;
}

void IntroState::init()
{
	_font.loadFromFile("res/font/PressStart2P.ttf");
	_title.setString("Untitled Stuff");
	_title.setFont(_font);
	_title.setCharacterSize(30);
	_title.setColor(sf::Color::White);
	_title.setPosition(100, 100);

	_texture.loadFromFile("res/img/wall.png");
	_sprite.setTexture(_texture);
}

void IntroState::cleanup()
{

}

void IntroState::handle_events(GameEngine* game, sf::Event event)
{

}

void IntroState::update(GameEngine* game, sf::Time deltaTime)
{

}

void IntroState::render(GameEngine* game)
{
	game->get_window()->draw(_title);
	game->get_window()->draw(_sprite);
}

void IntroState::pause()
{

}

void IntroState::resume()
{

}