#include <Player.h>
#include <iostream>
#include <string>

std::string Player::getNom(){
    return _nom;
}

void Player::afficheScores(){
    std::cout << "Votre meilleur score est de ", _meilleurScore, "pour la Chanson", _meilleurChanson <<endl;
    std::cout << "Votre pire score est de ", _pireScore, "pour la Chanson", _pireChanson<<endl;
}

void calculMoyenne(){
     _moyenne = _score0 +  _score1 +  _score2 +  _score3 +  _score4;
     _moyenne = _moyenne / 4 ;
}

void calculTotal(){
    _total = _score 0 + _score1 +  _score2 +  _score3 +  _score4;
}

void trouveMeilleure(){
    _meilleurScore = _score0;
    _meilleurChanson = 0;
    if (_score0 < _score1) {
        _meilleurScore = _score1;
        _meilleurChanson = 1;
    }
    if (_score1 < _score2) {
        _meilleurScore = _score2;
        _meilleurChanson = 2;
    }
    if (_score2 < _score3) {
        _meilleurScore = _score3;
        _meilleurChanson = 3;
    }
    if (_score3 < _score4) {
        _meilleurScore = _score4;
        _meilleurChanson = 4;
    }
}

void trouvePire(){
    _pireScore = _score0;
    _pireChanson = 0;
    if (_score0 < _score1) {
        _pireScore = _score1;
        _pireChanson = 1;
    }
    if (_score1 < _score2) {
        _pireScore = _score2;
        _pireChanson = 2;
    }
    if (_score2 < _score3) {
        _pireScore = _score3;
        _pireChanson = 3;
    }
    if (_score3 < _score4) {
        _pireScore = _score4;
        _pireChanson = 4;
    }
}
void choixAction(int choix, int entree1, int entree2){
    std::cout << "Que voulez-vous faire? 1 ajouter une valeur, 2 consulter les scores"<<endl ;
    std::cin  >> choix;
    if (choix == 1 ){
        cout << "Pour quelle chanson voulez vous entrer une valeur ?"<<endl ;
        cin >> entree1;
        if (entree1 < 0){
            cout << "Veuillez choisir un nombre entre 0 et 4"<<endl;
            cin >> entree1;
        }
        if (entree1 > 4){
            cout << "Veuillez choisir un nombre entre 0 et 4"<<endl;
            cin >> entree1;
        }
        cout <<"Quelle est le score à entrer ? "<< endl ;
        cin >> entree2;
         if (entree2 < 50){
            cout << "Veuillez choisir un nombre entre 50 et 100"<<endl;
            cin >> entree2;
        }
        if (entree2 > 100){
            cout << "Veuillez choisir un nombre entre 50 et 100"<<endl;
            cin >> entree2;
        }
        if (entree1 == 1){
            ajouteScore
    }
    }
}
Player();