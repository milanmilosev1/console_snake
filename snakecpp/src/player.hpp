#ifndef plGr
#define plGr
#include <iostream>
#include <Windows.h>


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

    void move() {
        if(GetAsyncKeyState('A') & 0x8000){
            posX = posX * 1.3;
        }
        else if(GetAsyncKeyState('W' & 0x8000)){
            posY = posY * 1.3;
        }
        else if(GetAsyncKeyState('D' & 0x8000)){
            posX = posX / 1.3;
        }
        else if(GetAsyncKeyState('S' & 0x8000)){
            posY = posY / 1.3;
        }
        else{
            posX = posX * 1;
            posY = posY * 1;
        }
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


#endif