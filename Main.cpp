#include <iostream>
#include <string>
#include "Player.h"
using namespace std; 

int main(){
    Player player1, player2;
    player1.afficheScores() ;
    player1.ajouteScore(0,51);
    player1.ajouteScore(1, 56);
    player1.ajouteScore(2, 84);
    player1.ajouteScore(3, 68);
    player1.ajouteScore(4,99);
    player1.calculMoyenne();
    player1.calculTotal();
    player1.trouveMeilleure();
    player1.trouvePire();
    player1.afficheScores();
    player1.choixAction();
    return 0;
}