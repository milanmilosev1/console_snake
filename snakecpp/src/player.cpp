#include "headers/player.hpp"

class Player{
private:
    int posX, posY, score;
public:
    Player(int, int, int);
    void setPosX(int posX){
        this->posX = posX;
    }
    void setPosY(int posY){
        this->posY = posY;
    }
    void setScore(int score){
        this->score = score;
    }

    int getScore() const {
        return score;
    }

    int getPosX() const {
        return posX;
    }
    int getPosY() const{
        return posY;
    }


    void drawPlayer() const{
        if(score == 0){
            std::cout << "B)==";
        }
        else{
            std::cout << "B)==";
            for(int i = 0; i < score; ++i){
                std::cout << "=";
            }
        }
        //std::cout << std::endl;
    }


    ~Player();
};

Player::Player(int x, int y, int s){
    posX = x;
    posY = y;
    score = s;
    std::cout << "player created" << std::endl;
}

Player::~Player()
{
    std::cout << "player destroyed" << std::endl;
}
