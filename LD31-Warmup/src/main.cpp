#include <iostream>
#include <SFML/Graphics.hpp>
#include "gameengine.h"
#include "states/introstate.h"
#include "states/gamestate.h"


int main()
{
    GameEngine game;
    game.init();

    game.change_state(GameState::instance());

    sf::Clock clock;

    while(game.is_running()){
        sf::Time deltaTime = clock.restart();

        game.handle_events();
        game.update(deltaTime);
        game.render();
    }
    game.cleanup();
    return 0;
}
