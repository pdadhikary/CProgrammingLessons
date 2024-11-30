#include <stdio.h>
#include <stdlib.h>
#include "deque.c"

#define PATH 0
#define WALL 1
#define CRUMB -1

#define UP 2
#define DOWN 3
#define LEFT 4
#define RIGHT 5

int findAllPath(
    int ncols,
    int nrows,
    int maze[nrows][ncols],
    int startRow, int startCol,
    int targetRow, int targetCol,
    struct CircularNode ** path
);

void printPath(struct CircularNode *head);

int main() {
    int ncol, nrow, startRow, startCol, targetRow, targetCol;
    nrow = ncol = 5;
    startRow = startCol = 0;
    targetRow = targetCol = 4;
    
    int maze[5][5] = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0},
        {0, 1, 1, 0, 0}
    };

    struct CircularNode *path = NULL;

    int num_paths = findAllPath(
        ncol,
        nrow,
        maze,
        startRow, startRow,
        targetRow, targetCol,
        &path
    );

    printf("There are %d number of paths through the maze.\n", num_paths);

    return 0;
}

int findAllPath(
    int ncols,
    int nrows,
    int maze[nrows][ncols],
    int startRow, int startCol,
    int targetRow, int targetCol,
    struct CircularNode ** path
) {
    if (startCol == targetCol && startRow == targetRow) {
        printPath(*path);
        return 1;
    }
    
    if (maze[startRow][startCol] == WALL || maze[startRow][startCol] == CRUMB) {
        return 0;
    }

    if (startRow >= nrows || startRow < 0) {
        return 0;
    }

    if (startCol >= ncols || startCol < 0) {
        return 0;
    }

    // Resucrsive case
    maze[startRow][startCol] = -1;

    // try going up
    push(path, UP);
    int path_up = findAllPath(
        ncols,
        nrows,
        maze,
        startRow - 1, startCol,
        targetRow, targetCol,
        path
    );
    pop(path);

    // try going down
    push(path, DOWN);
    int path_down = findAllPath(
        ncols,
        nrows,
        maze,
        startRow + 1, startCol,
        targetRow, targetCol,
        path
    );
    pop(path);

    // try going left
    push(path, LEFT);
    int path_left = findAllPath(
        ncols,
        nrows,
        maze,
        startRow, startCol - 1,
        targetRow, targetCol,
        path
    );
    pop(path);

    // try going right
    push(path, RIGHT);

    int path_right = findAllPath(
        ncols,
        nrows,
        maze,
        startRow, startCol + 1,
        targetRow, targetCol,
        path
    );
    pop(path);

    maze[startRow][startCol] = 0;


    return path_up + path_down + path_left + path_right;
}

void printPath(struct CircularNode *head) {
    if (head == NULL) {
        return;
    }

    struct CircularNode *tmp = head;

    do {
        int value = tmp->value;

        if (value == UP) printf("UP");
        if (value == DOWN) printf("DOWN");
        if (value == LEFT) printf("LEFT");
        if (value == RIGHT) printf("RIGHT");

        tmp = tmp->next;

        if(tmp != head) printf(" -> ");
    } while (tmp != head);
    
    printf("\n");
}
