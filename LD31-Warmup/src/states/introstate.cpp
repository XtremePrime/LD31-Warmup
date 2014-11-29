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
	//- Texture loading
	_tx_mgr.load_texture("wall", "res/img/wall.png");

	//- Sprite "loading"
	_sprites["wall"].setTexture(_tx_mgr.get_ref("wall"));

	_font.loadFromFile("res/font/PressStart2P.ttf");
	_title.setString("Untitled Stuff");
	_title.setFont(_font);
	_title.setCharacterSize(30);
	_title.setColor(sf::Color::White);
	_title.setPosition(100, 100);
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
	
	//- Render sprites
	#define it_type std::map<std::string, sf::Sprite>::iterator
	for(it_type it = _sprites.begin(); it != _sprites.end(); ++it)
		game->get_window()->draw(it->second);
	#undef it_type
}

void IntroState::pause()
{

}

void IntroState::resume()
{

}