#include "header.h"

int main(void) {
	char string[] = "string";

	char maze[8][8] = { {' ', ' ', ' ', ' ', 'X', 'X', 'X', 'X'},
						{'X', 'X', 'X', ' ', 'X', 'X', 'X', 'X'},
						{'X', 'X', 'X', ' ', ' ', 'X', 'X', 'X'},
						{'X', ' ', 'X', ' ', 'X', 'X', 'X', 'X'},
						{'X', ' ', 'X', ' ', 'X', 'X', 'X', 'X'},
						{'X', ' ', ' ', ' ', 'X', 'X', 'X', 'X'},
						{'X', ' ', 'X', ' ', ' ', ' ', ' ', ' '},
						{'X', 'X', 'X', 'X', 'X', 'X', 'X', ' '} };
	//task1
	printMaze(maze);
	navigateMaze(maze, 0, 1);
	printMaze(maze);
	//task2
	printf("%d\n", sumDigits(78));

	//task3
	recursively_reverse_string(string, 0, 5);
	printf("%s\n", string);

	//task4
	towerOfHanoi(5, 'A', 'B', 'C');
}