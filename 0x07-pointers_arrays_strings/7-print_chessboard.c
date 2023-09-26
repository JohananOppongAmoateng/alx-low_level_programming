#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The 2D array representing the chessboard.
 *
 * Description: This function prints the chessboard using the provided
 * 2D array representation.
 */

void print_chessboard(char (*a)[8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
}
