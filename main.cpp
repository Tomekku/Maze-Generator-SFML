#include <time.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include "block.h"
#include "randoms.h"
#include "mazegenerator.h"

int main(){
    sf::RenderWindow window(VideoMode(800,600),"Kulka");
    MazeGenerator maze;
    maze.createMaze();
    bool state=true;
    Event event;
    while(state)
    {
        while(window.pollEvent(event))
        {
            if(event.type == Event::Closed || (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape))
                state = false;
        }
        window.clear();
        window.draw(maze);
        window.display();
    }

}
