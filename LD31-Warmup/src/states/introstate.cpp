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

}

void IntroState::pause()
{

}

void IntroState::resume()
{

}