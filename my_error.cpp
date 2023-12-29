#include <iostream>
using namespace std;
int my_error_player(int ac)
{
    if (ac > 5 || ac < 3) {
        cout << "Vous devez avoir avoir entre deux et quatres joueurs pour jouer" << endl;
        return 84;
    }
    return 0;
}