#ifndef INTROSTATE_H
#define INTROSTATE_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "state.h"
#include "../texturemanager.h"

class IntroState : public State{
private:
	TextureManager _tx_mgr;
	std::map<std::string, sf::Sprite> _sprites;

	sf::Font _font;
	sf::Text _title;
protected:
	static IntroState* _instance;
	IntroState(){}
public:
	static IntroState* instance();
	~IntroState(){}
	void init();
	void cleanup();

	void handle_events(GameEngine* game, sf::Event event);
	void update(GameEngine* game, sf::Time deltaTime);
	void render(GameEngine* game);

 	void pause();
 	void resume();
};

#endif // INTROSTATE_H

