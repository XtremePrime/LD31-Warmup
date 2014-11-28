#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>
#include "entity.h"

class Player : Entity {
private:
	sf::Vector2f _velocity;
	sf::Vector2f _dir;
	sf::Sprite _sprite;
	sf::Texture _p_texture;
public:
	virtual ~Player();
	Player();

	void handle_events(GameEngine* game, sf::Event event);
	void update(GameEngine* game, sf::Time deltaTime);
	void render(GameEngine* game);
};

#endif // PLAYER_H
