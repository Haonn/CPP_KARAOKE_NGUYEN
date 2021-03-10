#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

string Player::getNom(){
    return _nom;
}

void Player::afficheScores(){
    cout << "Votre meilleur score est de "<< _meilleurScore <<"pour la Chanson"<< _meilleurChanson <<endl;
    cout << "Votre pire score est de "<< _pireScore<< "pour la Chanson"<< _pireChanson <<endl;
    cout << "Votre moyenne est de "<< _moyenne << " et votre total est de "<< _total <<endl;
}

void Player::calculMoyenne(){
     _moyenne = _score0 +  _score1 +  _score2 +  _score3 +  _score4;
     _moyenne = _moyenne / 4 ;
}

void Player::calculTotal(){
    _total = _score0 + _score1 +  _score2 +  _score3 +  _score4;
}

void Player::trouveMeilleure(){
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

void Player::trouvePire(){
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
void Player::choixAction(){
    cout << "Que voulez-vous faire? 1 ajouter une valeur, 2 consulter les scores"<<endl ;
    cin  >>_choix;
    if (_choix == 1 ){
        cout << "Pour quelle chanson voulez vous entrer une valeur ?"<<endl ;
        cin >> _entree1;
        if (_entree1 < 0){
            cout << "Veuillez choisir un nombre entre 0 et 4"<<endl;
            cin >> _entree1;
        }
        if (_entree1 > 4){
            cout << "Veuillez choisir un nombre entre 0 et 4"<<endl;
            cin >> _entree1;
        }
        cout <<"Quelle est le score à entrer ? "<< endl ;
        cin >> _entree2;
         if (_entree2 < 50){
            cout << "Veuillez choisir un nombre entre 50 et 100"<<endl;
            cin >> _entree2;
        }
        if (_entree2 > 100){
            cout << "Veuillez choisir un nombre entre 50 et 100"<<endl;
            cin >> _entree2;
        }
        if (_entree1 == 1){
            ajouteScore(1);
        }
         if (_entree1 == 2){
            ajouteScore(2);
        }
        if (_entree1 == 3){
            ajouteScore(3);
        }
        if (_entree1 == 4){
            ajouteScore(4);
        }
    }
    if (_choix == 2){
        afficheScores();
    }
}
void Player::ajouteScore(int score){
    if (score = 0){
        if (_score0 < _entree2){
            _score0 = _entree2;
        }
    }
    if (score = 1){
        if (_score1 < _entree2){
            _score1 = _entree2;
        }
    }
    if (score = 2){
        if (_score2 < _entree2){
            _score2 = _entree2;
        }
    }
    if (score = 3){
        if (_score3 < _entree2){
            _score3 = _entree2;
        }
    }
    if (score = 4){
        if (_score4 < _entree2){
            _score4 = _entree2;
        }
    }
}
Player::Player(){
    cout << "Quel est votre pseudonyme?"<< endl;
    cin >> _nom; 
    _score0 = 0;
    _score1 = 0;
    int _score2 = 0;
    int _score3 = 0;
    int _score4 = 0;
    int _moyenne = 0;
    int _total = 0;
    int _meilleurChanson = 0;
    int _meilleurScore = 0;
    int _pireChanson = 4;
    int _pireScore = 0;
};