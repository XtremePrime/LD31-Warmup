#include <string>
#include <iostream>

#include "gamestate.h"

using namespace std;

GameState* GameState::_instance;

GameState* GameState::instance(){
	if(_instance == NULL) _instance = new GameState();
	return _instance;
}

void GameState::init()
{
	//- Texture loading
	_tx_mgr.load_texture("wall", "res/img/wall.png");

	//- Sprite "loading"
	_sprites["wall"].setTexture(_tx_mgr.get_ref("wall"));

	//- Music load+play
	_music.openFromFile("res/music/TheForestAwakes.ogg");
	_music.play();
	_music.setLoop(true);
	_music.setVolume(65);
}

void GameState::cleanup(){
	
}

void GameState::handle_events(GameEngine* game, sf::Event event){
	player.handle_events(game, event);
}

void GameState::update(GameEngine* game, sf::Time deltaTime){
	player.update(game, deltaTime);
}

void GameState::render(GameEngine* game){
	player.render(game);

	//- Render sprites
	#define it_type std::map<std::string, sf::Sprite>::iterator
	for(it_type it = _sprites.begin(); it != _sprites.end(); ++it)
		game->get_window()->draw(it->second);
	#undef it_type
}

void GameState::pause(){

}

void GameState::resume(){

}
