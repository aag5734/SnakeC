#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


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

/**
 * Draws out the field for the game
*/
void draw() {
    clrscr();
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1) {
                printf("x");
            } else {
                if (i == x && j == x) {
                    printf("0");
                } else if (i == foodx && j == foody) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    printf("Score: %d\n", score);
}


