/*
Author: Artemis Ulysses Tack
Class: CPR E 185
Section: 2
Date: 2024-02-28
License: GPLv3

Copyright (C) 2024 Artemis Tack

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

char* random_button();
int is_correct_button(char* button, int triangle, int circle, int x_button, int square, int r3, int l3, int options, int share, int r2, int l2, int r1, int l1, int up, int left, int down, int right);

int main(int argc, char *argv[]) {

    srand(time(0));

    time_t start_time = time(NULL);

    int triangle, circle, x_button, square, share, options, l1, l2, r1, r2, up, down, left, right, l3, r3;
    int game_start = 0;
    char* button = random_button();
    int inner_loop = 0;
    int good_job = 0;

    printf("Press the options button to continue\n");

    while(1){
        scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &triangle, &circle, &x_button, &square, &r3, &l3, &options, &share, &r2, &l2, &r1, &l1, &up, &left, &down, &right);
        if (options == 1) {
            printf("Welcome to the wonderful world of the Gamemaster. Enjoy this game of bop it! \n");
            game_start = 1;
            sleep(1);
            break;
            }
    }

    while (game_start == 1) {

        char* button = random_button();
        printf("Press this random button: %s\n", button);


        if (time(NULL) - start_time > 10) {
            exit(0);
        }

        inner_loop = 1;

    while (inner_loop == 1 && time(NULL) - start_time < 99) {

        scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &triangle, &circle, &x_button, &square, &r3, &l3, &options, &share, &r2, &l2, &r1, &l1, &up, &left, &down, &right);

 //       printf("Test 1: I made it");

       //  printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", triangle, circle, x_button, square, r3, l3, options, share, r2, l2, r1, l1, up, left, down, right);

        if (strcmp(button, "triangle") == 0) {
            if (triangle ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "circle") == 0) {
            if (circle ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "x") == 0) {
            if (x_button ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "square") == 0) {
            if (square ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "r3") == 0) {
            if (r3 ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "l3") == 0) {
            if (l3 ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "options") == 0) {
            if (options ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "share") == 0) {
            if (share ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "r2") == 0) {
            if (r2 ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "l2") == 0) {
            if (l2 ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "r1") == 0) {
            if (r1 ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "l1") == 0) {
            if (l1 ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "up") == 0) {
            if (up ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "left") == 0) {
            if (left ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "down") == 0) {
            if (down ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
        else if (strcmp(button, "right") == 0) {
            if (right ==1) {
                printf("Good job matey\n");
                good_job = 1;
                break;
            }
        }
    }
    if (good_job == 1) {
        printf("Good job matey, continue on\n");
    }
    else {
        printf("You failed, byeeee\n");
        exit(0);
    }



    }

}

char* random_button() {
    char* buttons[16] = {"triangle", "circle", "x", "square", "r3", "l3", "options", "share", "r2", "l2", "r1", "l1", "up", "left", "down", "right"};
    char button = rand() % 16;
    return buttons[button];
}

int is_correct_button(char* button, int triangle, int circle, int x_button, int square, int r3, int l3, int options, int share, int r2, int l2, int r1, int l1, int up, int left, int down, int right) {
      
    if (strcmp(button, "triangle") == 0) {
        if (triangle == 1) {
            return 1;
        }
    }
    if (strcmp(button, "circle") == 0) {
        if (circle == 1) {
            return 1;
        }
    }
    if (strcmp(button, "x") == 0) {
        if (x_button == 1) {
            return 1;
        }
    }
    if (strcmp(button, "square") == 0) {
        if (square == 1) {
            return 1;
        }
    }
    if (strcmp(button, "r3") == 0) {
        if (r3 == 1) {
            return 1;
        }
    }
    if (strcmp(button, "l3") == 0) {
        if (l3 == 1) {
            return 1;
        }
    }
    if (strcmp(button, "options") == 0) {
        if (options == 1) {
            return 1;
        }
    }
    if (strcmp(button, "share") == 0) {
        if (share == 1) {
            return 1;
        }
    }
    if (strcmp(button, "r2") == 0) {
        if (r2 == 1) {
            return 1;
        }
    }
    if (strcmp(button, "l2") == 0) {
        if (l2 == 1) {
            return 1;
        }
    }
    if (strcmp(button, "r1") == 0) {
        if (r1 == 1) {
            return 1;
        }
    }
    if (strcmp(button, "l1") == 0) {
        if (l1 == 1) {
            return 1;
        }
    }
    if (strcmp(button, "up") == 0) {
        if (up == 1) {
            return 1;
        }
    }
    if (strcmp(button, "left") == 0) {
        if (left == 1) {
            return 1;
        }
    }
    if (strcmp(button, "down") == 0) {
        if (down == 1) {
            return 1;
        }
    }
    if (strcmp(button, "right") == 0) {
        if (right == 1) {
            return 1;
        }
    }
    return 0;

}

