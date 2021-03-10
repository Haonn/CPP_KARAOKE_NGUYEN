#include <iostream>
#include <string>

class Player{
    private :
    std::string _nom;
    int _score0;
    int _nouvScore0;
    int _score1;
    int _nouvScore1;
    int _score2;
    int _nouvScore2;
    int _score3;
    int _nouvScore3;
    int _score4;
    int _nouvScore4;
    int _moyenne;
    int _total;
    int _meilleurChanson;
    int _meilleurScore;
    int _pireChanson;
    int _pireScore;

    public :
    void getNom();
    void afficheScores();
    void calculMoyenne();
    void calculTotal();
    void choixAction(int choix, int entree);
    Player();
};