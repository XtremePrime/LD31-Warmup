#ifndef INTROSTATE_H
#define INTROSTATE_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "state.h"

class IntroState : public State{
private:
protected:
	static IntroState* _instance;
	IntroState(){}
public:
	static IntroState* instance();
	~IntroState(){}
	virtual void init();
	virtual void cleanup();

	virtual void handle_events(GameEngine* game, sf::Event event);
	virtual void update(GameEngine* game, sf::Time deltaTime);
	virtual void render(GameEngine* game);

 	virtual void pause();
 	virtual void resume();
};

#endif // INTROSTATE_H

