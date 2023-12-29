#ifndef GAME_H
    #define GAME_H
    #include "player.h"
    #include "my_error.h"
    #include "game.h"
struct Card {
    int points;
    char letter;
};

struct Player {
    int id;
    int score;
    int numCards;
    Card* hand;
};

struct Game {
    Player* players;
    Card* deck;
    Card* exposedCards;
    char** wordsOnTable;
};
#endif // GAME_H
