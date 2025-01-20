#include <stdio.h>
#include <stdlib.h>

// main method for program
int main(void) {
    // get user input
    int lines;
    printf("Enter the number of rows for the triangle: \n");
    scanf("%d", &lines);

    // declare array of pointers
    int *triangle[lines];
    for (int i = 0; i < lines; i++) {
        triangle[i] = malloc(i+1 * sizeof(int));
        for (int j = 0; j < i+1; j++) {
            triangle[i][j] = 1;
        }
    }

    // print the triangle
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%d", triangle[i][j]);
        }
        printf("\n");

    }
    return 0;
}