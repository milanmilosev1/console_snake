#ifndef mapGrd
#define mapGrd

#include "player.hpp"
#include <iostream>

class Map{
private:
    int width;
    int heigth;
    Player p1;
public:
    Map(int, int, Player&);
    ~Map();

    void setWidth(int width){
        this->width = width;
    }
    void setHeigth(int heigth){
        this->heigth = heigth;
    }

    int getWidth() const{
        return width;
    }
    int getHeigth() const{
        return heigth;
    }

    void printMap() const {
        int numOfSpaces;
        for(int i = 0; i < width; ++i){
            std::cout << "w";
        }
        std::cout << std::endl;
        for(int i = 0; i < heigth; ++i){
            numOfSpaces = width - 2;
            std::cout << "|";
            if (i == p1.getPosY()){
                numOfSpaces = width - p1.getPosX() - (6 + p1.getScore());
                for(int j = 0; j < p1.getPosX(); ++j){
                    std::cout << " ";
                }
                p1.drawPlayer();
                do{
                    --numOfSpaces;
                    std::cout << " ";
                }while(numOfSpaces > 0);
                std::cout << "|" << std::endl;
            }
            else{
                do{
                    --numOfSpaces;
                    std::cout << " ";
                }while(numOfSpaces > 0);
                std::cout << "|" << std::endl;
            }   
        }

        for(int i = 0; i < width; ++i){
            std::cout << "W";
        }
        std::cout << std::endl;
    }
};

Map::Map(int w, int h, Player& p) : p1(p.getPosX(), p.getPosY(), p.getScore()){
    heigth = h;
    width = w;
    //p1.setPosX() = p.getPosX();
    //p1.setPosY() = p.getPosY();
    std::cout << "map created" << std::endl;
}

Map::~Map(){
    std::cout << "map deleted" << std::endl;
}








#endif