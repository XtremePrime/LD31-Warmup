#ifndef STATE_H
#define STATE_H

class State {
private:
public:
	virtual void init() = 0;
	virtual void cleanup() = 0;

	virtual void handle_events(GameEngine* game, sf::Event event) = 0;
	virtual void update(GameEngine* game, sf::Time deltaTime) = 0;
	virtual void render(GameEngine* game) = 0;

 	virtual void pause() = 0;
 	virtual void resume() = 0;

	void change_state(GameEngine* game, State* state){
		game->change_state(state);
	}
	virtual ~State(){};
protected:
    State(){}
};

#endif // STATE_H
