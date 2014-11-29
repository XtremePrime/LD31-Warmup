#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

//#include "texturemanager.h"

class State;
class GameEngine {
private:
	std::vector<State*> _state_stack;
	sf::Event _event;
    sf::RenderWindow _window;
    //TextureManager _tx_mgr;
	bool _running;
public:
	static const int GAME_WIDTH = 640, GAME_HEIGHT = 480;
	sf::RenderWindow* get_window(){ return &_window; }
	//TextureManager* get_tx_mgr(){ return &_tx_mgr; }
	void init();
	void cleanup();

	void handle_events();
	void update(sf::Time deltaTime);
	void render();

	void change_state(State* state);
	void push_state(State* state);
	void pop_state();

	bool is_running() { return _running; }
	void quit() {
		_running = false;
	}
};

#endif // GAMEENGINE_H
