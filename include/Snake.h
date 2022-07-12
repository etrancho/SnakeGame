#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>
#include <vector>

#define width 50
#define height 25

using namespace std;

class Snake
{
    private:
        COORD pos;
        int len;
        int vel;
        char dir;
        vector<COORD> body;

    public:
        Snake(COORD pos, int vel);
        void grow(); //grow snake
        void move_snake(); //move snake to a direction
        void direction(char dir); //change direction of snake

        vector<COORD> get_body();

        bool collided();
        bool eaten(COORD food_pos);
        COORD get_pos(); //get the current position of snake
};

#endif // SNAKE_H
