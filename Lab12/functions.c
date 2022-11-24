#include "header.h"

char* recursively_reverse_string(char* arr, int first, int last)
{
    if (last == 0 || arr == NULL)
    {
        return arr;
    }
    if (first < last)
    {
        //swap
        char temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;

        recursively_reverse_string(arr, first + 1, last - 1);
    }
}

int sumDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return num % 10 + sumDigits(num / 10);
}

void navigateMaze(char maze[][8], int x, int y) {
    if (x == 7 && y == 7) {
        return;
    }

    else if (maze[y + 1][x] == ' ') {
        maze[y + 1][x] = 'O';
        navigateMaze(maze, x, y + 1);
    }
    else if (maze[y - 1][x] == ' ') {
        maze[y - 1][x] = 'O';
        navigateMaze(maze, x, y - 1);
    }
    else if (maze[y][x - 1] == ' ') {
        maze[y][x - 1] = 'O';
        navigateMaze(maze, x - 1, y);
    }
    else if (maze[y][x + 1] == ' ') {
        maze[y][x + 1] = 'O';
        navigateMaze(maze, x + 1, y);
    }
    else {
        printf("No solution\n");
        return;
    }

}

void printMaze(char maze[8][8]) {
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}