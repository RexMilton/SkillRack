import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner q = new Scanner(System.in);
        int r = q.nextInt(), c = q.nextInt();
        int[][] arr = new int[r + 1][c + 1];
        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++) {
                arr[i][j] = q.nextInt() + arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}