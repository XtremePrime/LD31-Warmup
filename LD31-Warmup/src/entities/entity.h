#ifndef ENTITY_H
#define ENTITY_H

#include "../gameengine.h"

class Entity {
private:
	
public:
	virtual ~Entity(){}

	virtual void handle_events(GameEngine* game, sf::Event event) = 0;
	virtual void update(GameEngine* game, sf::Time deltaTime) = 0;
	virtual void render(GameEngine* game) = 0;

protected:
	Entity(){}
};

#endif // ENTITY_H
