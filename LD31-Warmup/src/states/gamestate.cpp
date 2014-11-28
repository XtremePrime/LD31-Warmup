#include <string>
#include <iostream>

#include "gamestate.h"

using namespace std;

GameState::GameState(){

}

GameState::~GameState(){

}

void load_image(sf::Image* image, const string& filename){
	if(!image->loadFromFile(filename)){
		cout << "Couldn't load image '" << filename << "'" << endl;
		return;
	}
}
void GameState::init(){
	load_image(player, "res/img/player.png");
	load_image(wall, "res/img/wall.png");
}

void GameState::cleanup(){
	delete player;
}

void GameState::handle_events(GameEngine* game, sf::Event event){

}

void GameState::update(GameEngine* game, sf::Time deltaTime){

}

void GameState::render(GameEngine* game){

}

void GameState::pause(){

}

void GameState::resume(){

}
