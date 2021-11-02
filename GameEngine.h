#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "Game.h"

class GameEngine {
public:
    GameEngine();
    ~GameEngine();
    void run();

    enum class StartOption {
        NEW_GAME = 1,
        LOAD_GAME = 2
    };

    enum class GameOption {
        PLAY_CARD = 1,
        SHOW_GAME = 2,
        NEXT_TURN = 3,
        SAVE_GAME = 4,
        QUIT = 5
    };

private:
    Game *const game;

    bool play_card();
    void show_game() const;
    void next_turn();
    void save() const;
};

#endif //GAMEENGINE_H
