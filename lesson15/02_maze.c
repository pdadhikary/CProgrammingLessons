#include <stdio.h>
#include <stdlib.h>
#include "deque.c"

// MAZE
#define ROAD 0
#define WALL 1
#define CRUMB -1
// DIRECTIONS
#define UP 2
#define DOWN 3
#define LEFT 4
#define RIGHT 5


int findAllPath(
    int nrows, int ncols, int maze[nrows][ncols], 
    int startRow, int startCol, 
    int targetRow, int targetCol,
    struct CircularNode **head);

void printPath(struct CircularNode *head);

int main() {
    int ncols, nrows, startRow, startCol, targetRow, targetCol;
    nrows = ncols = 5;
    int maze[5][5] = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0},
        {0, 1, 1, 0, 0}
    };
    startRow = startCol = 0;
    targetRow = targetCol = 4;

    struct CircularNode *head = NULL;

    int numPaths = findAllPath(nrows, ncols, maze, startRow, startCol, targetRow, targetCol, &head);
    printf("\nThere's %d path(s) through the maze.\n", numPaths);
    return 0;
}

int findAllPath(
    int nrows, int ncols, int maze[nrows][ncols], 
    int startRow, int startCol, 
    int targetRow, int targetCol,
    struct CircularNode **head) {
        if (startRow == targetRow && startCol == targetCol) { // Reached the targed
            printPath(*head);
            return 1;
        } 
        
        if (startRow < 0 || startRow >= nrows) { // Outside of maze boundary
            return 0;
        }
        
        if (startCol < 0 || startCol >= ncols) { // Outside of maze boundary
            return 0;
        }
        
        if (maze[startRow][startCol] == WALL || maze[startRow][startCol] == CRUMB) {
            // We've walked into a wall or going in circle
            return 0;
        }

        maze[startRow][startCol] = -1;

        // try going up
        push(head, UP);
        int path_up = findAllPath(nrows, ncols, maze, startRow - 1, startCol, targetRow, targetCol, head);
        pop(head);

        // try going down
        push(head, DOWN);
        int path_down = findAllPath(nrows, ncols, maze, startRow + 1, startCol, targetRow, targetCol, head);
        pop(head);

        // try going left
        push(head, LEFT);
        int path_left = findAllPath(nrows, ncols, maze, startRow, startCol - 1, targetRow, targetCol, head);
        pop(head);

        // try going right
        push(head, RIGHT);
        int path_right = findAllPath(nrows, ncols, maze, startRow, startCol + 1, targetRow, targetCol, head);
        pop(head);

        maze[startRow][startCol] = 0;

        return path_up + path_down + path_left + path_right;
}

void printPath(struct CircularNode *head) {
    if (head == NULL) return;
    struct CircularNode *tmp = head;
    do { // do-while loop
        int value = tmp->value;

        if(value == UP) printf("up");
        if(value == DOWN) printf("down");
        if(value == LEFT) printf("left");
        if(value == RIGHT) printf("right");

        tmp = tmp->next;
        if (tmp != head) printf(" -> ");
    } while (tmp != head);

    printf("\n");
}