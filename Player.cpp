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
void Player::choixAction(int choix, int entree1, int entree2){
    cout << "Que voulez-vous faire? 1 ajouter une valeur, 2 consulter les scores"<<endl ;
    cin  >> choix;
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
            ajouteScore(1, entree2);
        }
         if (entree1 == 2){
            ajouteScore(2, entree2);
        }
        if (entree1 == 3){
            ajouteScore(3, entree2);
        }
        if (entree1 == 4){
            ajouteScore(4, entree2);
        }
    }
}
void Player::ajouteScore(int score, int entree){
    if (score = 0){
        if (_score0 < entree){
            _score0 = entree;
        }
    }
    if (score = 1){
        if (_score1 < entree){
            _score1 = entree;
        }
    }
    if (score = 2){
        if (_score2 < entree){
            _score2 = entree;
        }
    }
    if (score = 3){
        if (_score3 < entree){
            _score3 = entree;
        }
    }
    if (score = 4){
        if (_score4 < entree){
            _score4 = entree;
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