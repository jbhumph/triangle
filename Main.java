import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        // declare new scanner and get user input
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int rows = scanner.nextInt();
        // declare empty array
        int[][] main = new int[rows][];
        // for each row add empty sub array
        for (int i = 0; i < rows; i++) {
            main[i] = new int[i+1];
            for (int j = 0; j < i+1; j++) {
                main[i][j] = 1;
            }
        }
        // call recursive method
        triangle(main, 0, 0);
        System.out.println(Arrays.deepToString(main));
    }

    public static void triangle(int[][] main, int x, int y) {
        if (x < main.length) {
            try {
                if (main[x][y] != main[x-1][y-1] + main[x-1][y]) {
                    main[x][y] = main[x-1][y-1] + main[x-1][y];
                }
            } catch (ArrayIndexOutOfBoundsException e) {
                main[x][y] = 1;
            }
            triangle(main, x+1, y);
            triangle(main, x+1, y+1);
        }
    }
}