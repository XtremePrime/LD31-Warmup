#include <string>
#include <iostream>

#include "gamestate.h"

using namespace std;

GameState* GameState::_instance;

GameState* GameState::instance(){
	if(_instance == NULL) _instance = new GameState();
	return _instance;
}

void GameState::init(){
	player = Player();
	_w_texture.loadFromFile("res/img/wall.png");
	_wall_spr.setTexture(_w_texture);

	//_player_spr.setPosition(250, 250);

	_music.openFromFile("res/music/menu.ogg");

	_music.play();
}

void GameState::cleanup(){
	
}

void GameState::handle_events(GameEngine* game, sf::Event event){
	player.handle_events(game, event);
}

void GameState::update(GameEngine* game, sf::Time deltaTime){
	player.update(game, deltaTime);
    //_sprite.move(_movement * deltaTime.asSeconds());
}

void GameState::render(GameEngine* game){
	player.render(game);
	game->get_window()->draw(_wall_spr);	
}

void GameState::pause(){

}

void GameState::resume(){

}
