#include <iostream>
#include "include/struct.h"
using namespace std;

int main(int ac, char* av[])
{
    cout << "CECI EST UN TEST";
    int n = stoi(av[1]);
    Game* game = new Game;
    game->players = new Player[n - 1];
    int nbPlayer = 1;

    my_error_player(ac);
    initializePlayers(n);
    cout << "PRINT BIEN" << endl;
    
    return 0;
}