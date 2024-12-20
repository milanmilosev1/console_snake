#include <iostream>
#include "map.cpp"

int main(){

    //std::cout<<"cao"<<std::endl;
    Player p(50, 10, 10);
    Map m(100, 20, p);

    m.printMap();
    //p.drawPlayer();
    
    return 0;
}