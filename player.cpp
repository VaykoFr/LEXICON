#include <iostream>
#include "include/struct.h"

void initializePlayers(int numPlayers)
{
    Game* game = new Game;
    game->players = new Player[numPlayers + 1];
    int nbPlayer = 1;

    while (nbPlayer < (numPlayers + 1)) {
        game->players[nbPlayer].id = nbPlayer;
        game->players[nbPlayer].score = 0;
        game->players[nbPlayer].numCards = 0;
        game->players[nbPlayer].hand = nullptr;
        nbPlayer++;
    }
}