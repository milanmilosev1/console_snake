#include <iostream>
#include "gameLoop.hpp"

int main(){

    Player p(50, 48, 0);
    Map m(50, 50, p);

    //std::cout<<"cao"<<std::endl;
    gameLoop(m, p);
    //p.drawPlayer();
    
    return 0;
}