import java.util.Scanner;

class Main {

  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);
    while (sc.hasNextInt()) {
      int n = sc.nextInt();
      int[][] m = new int[n][n];
      for (int i = 0; i < n; ++i) 
        for (int j = 0; j < n; ++j) 
          m[i][j] = sc.nextInt();
      Solution.transpose(m);
      for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) 
          System.out.print(Integer.toString(m[i][j]) + ' ');
        System.out.println();
      }   
      System.out.println();
    }
  }

}
