#ifndef GL_hdr_grd
#define GL_hdr_grd
#include "map.hpp"
#include <iostream>
#include <Windows.h>

void gameUpdate(const Map& m, Player& p){
    while(true){    
        m.printMap();
        p.move();
        system("cls");
    }
}

void gameLoop(const Map& m, Player& p){
    gameUpdate(m, p);
}

int gameOverScreen(){
    std::cout << " --- Game Over --- " << std::endl;
    return 0;
}
#endif