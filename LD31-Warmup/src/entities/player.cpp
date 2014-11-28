#include "player.h"

Player::~Player(){

}

Player::Player(){
	_p_texture.loadFromFile("res/img/player.png");
	_sprite.setTexture(_p_texture);
	_velocity = sf::Vector2f(80, 80);
}

void Player::handle_events(GameEngine* game, sf::Event event){
	_dir = sf::Vector2f(0, 0);
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
    	_dir -= sf::Vector2f(1, 0);
   	}
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
    	_dir += sf::Vector2f(1, 0);
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
    	_dir -= sf::Vector2f(0, 1);
   	}
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
    	_dir += sf::Vector2f(0, 1);
    }
}

sf::Vector2f multiply(sf::Vector2f first, sf::Vector2f second){
	sf::Vector2f result(first.x*second.x, first.y*second.y);
	return result;
}

void Player::update(GameEngine* game, sf::Time deltaTime){
    _sprite.move(multiply(_dir, _velocity) * deltaTime.asSeconds());
}

void Player::render(GameEngine* game){
	game->get_window()->draw(_sprite);
}
