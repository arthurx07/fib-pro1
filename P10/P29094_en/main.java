import java.util.Scanner;

class Main {

  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);
    while (sc.hasNextInt()) {
      int m = sc.nextInt();
      int n = sc.nextInt();
      double[] v = new double[n];
      for (int i = 0; i < n; ++i) v[i] = sc.nextDouble();
      System.out.println(Solution.positionMaximum(v, m));
    }
  }

}
