#include <iostream>
#include <string>
#include "Player.h"
using namespace std; 

int main(){
    Player player1, player2;
    player1.afficheScores() ;
    player1.choixAction();
    player1.choixAction();
    player1.choixAction();
    player1.choixAction();
    player1.choixAction();
    player1.calculMoyenne();
    player1.calculTotal();
    player1.trouveMeilleure();
    player1.trouvePire();
    player1.afficheScores();
    return 0;
}