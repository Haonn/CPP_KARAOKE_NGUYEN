#include <string>

class Player{
    private :
    std::string _nom;
    int _score0;
    int _score1;
    int _score2;
    int _score3;
    int _score4;
    int _moyenne;
    int _total;
    int _meilleurChanson;
    int _meilleurScore;
    int _pireChanson;
    int _pireScore;
    int _entree1;
    int _entree2;
    int _choix;

    public :
    std::string getNom();
    void afficheScores();
    void calculMoyenne();
    void calculTotal();
    void trouveMeilleure();
    void trouvePire();
    void choixAction();
    void ajouteScore(int score);
    Player();
};