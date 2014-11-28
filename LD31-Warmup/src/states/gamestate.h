#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "state.h"

class GameState : public State {
private:
	sf::Sprite _player_spr;
	sf::Sprite _wall_spr;
	sf::Texture _p_texture;
	sf::Texture _w_texture;

	sf::Music _music;
protected:
	static GameState* _instance;
	GameState(){}
public:
	static GameState* instance();
    ~GameState(){}
	void init();
	void cleanup();

	void handle_events(GameEngine* game, sf::Event event);
	void update(GameEngine* game, sf::Time deltaTime);
	void render(GameEngine* game);

 	void pause();
 	void resume();
};

#endif // GAMESTATE_H
