#include <stdio.h>
#include <stdlib.h>


int i, j, height = 20, width = 20;
int lose = 0, score = 0;
int x, y, foodx, foody, flag;

/**
 * Sets the losing state to 0 and assigns the starting place
 * for the snake
*/
void setup() {
    x = height / 2;
    y = width / 2;

    for (;;) {
        foodx = rand() % height;
        foody = rand() % width;

        if ((foodx > 0) && (foody > 0)) {
            break;
        }
    }
}


