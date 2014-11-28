#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <SFML/Graphics/Image.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

#include "state.h"

class GameState : State {
private:
	sf::Image* player;
	sf::Image* wall;
public:
	GameState();
	virtual ~GameState();
	void init();
	void cleanup();

	void handle_events(GameEngine* game, sf::Event event);
	void update(GameEngine* game, sf::Time deltaTime);
	void render(GameEngine* game);

 	void pause();
 	void resume();
};

#endif // GAMESTATE_H
