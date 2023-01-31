#include <stdio.h>
#include <stdlib.h>


int i, j, height = 20, width = 20;
int lose, win;
int x, y, foodx, foody, flag;

/**
 * Sets the losing state to 0 and assigns the starting place
 * for the snake
*/
void setup() {
    lose = 0;
    x = height / 2;
    y = width / 2;
}


