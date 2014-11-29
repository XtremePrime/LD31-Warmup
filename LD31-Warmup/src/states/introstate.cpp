#include "introstate.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <cmath>

IntroState* IntroState::_instance;

IntroState* IntroState::instance(){
	if(_instance == NULL) _instance = new IntroState();
	return _instance;
}

void IntroState::init()
{
	//- Texture loading
	_tx_mgr.load_texture("wall", "res/img/wall.png");
	_tx_mgr.load_texture("background", "res/img/bg.png");	

	//- Sprite "loading"
	_sprites["wall"].setTexture(_tx_mgr.get_ref("wall"));
	_sprites["background"].setTexture(_tx_mgr.get_ref("background"));	

	_font.loadFromFile("res/font/PressStart2P.ttf");
	_title.setString("Untitled Stuff");
	_title.setFont(_font);
	_title.setCharacterSize(30);
	_title.setColor(sf::Color::Black);
	_title.setPosition(100, 100);

	_sprites["background"].setScale((float)(640)/250, (float)(480)/190);
	std::cout << _sprites["background"].getScale().x << "\n";

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
	//- Render sprites
	#define it_type std::map<std::string, sf::Sprite>::iterator
	for(it_type it = _sprites.begin(); it != _sprites.end(); ++it)
		game->get_window()->draw(it->second);
	#undef it_type

	game->get_window()->draw(_title);
}

void IntroState::pause()
{

}

void IntroState::resume()
{

}