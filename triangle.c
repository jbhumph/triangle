/*
 * NAME: John Humphrey 
 * CS240 Lab 1: Recursion
 * Team: John Humphrey, Jing Lin Lai, Adam Sabet
 */

#include <stdio.h>
#include <stdlib.h>

// recursive method for calculating triangle
void calculate(int *triangle[], int x, int y, int lines) {
    if (x >= lines || y > x) {
        return;
    } else if (y == 0 || y == x) {
        triangle[x][y] = 1;
    } else {
        triangle[x][y] = triangle[x-1][y-1] + triangle[x-1][y];
    } 
    calculate(triangle, x+1, y, lines);
    calculate(triangle, x+1, y+1, lines);
}

// method for printing symmetrical triangle
void printTriangle(int *triangle[], int lines) {
    printf("\n\n");
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < lines - i; j++) {
            printf("   ");
        }
        for (int j = 0; j < i + 1; j++) {
            if (triangle[i][j] < 10) {
                printf("%d     ", triangle[i][j]);
            } else {
                printf("%d    ", triangle[i][j]);
            }
        }
        printf("\n\n");
    }
}

// main method for program
int main(void) {
    // get user input
    int lines;
    printf("Enter the number of rows for the triangle: \n");
    scanf("%d", &lines);

    int **triangle = malloc(lines * sizeof(int *));
    for (int i = 0; i < lines; i++) {
        triangle[i] = calloc(i + 1, sizeof(int));
    }

    calculate(triangle, 0, 0, lines);
    printTriangle(triangle, lines);
    printf("\n");
    
    for (int i = 0; i < lines; i++) {
        free(triangle[i]);
    }
    free(triangle);

    return 0;
}