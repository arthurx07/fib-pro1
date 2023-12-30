import java.util.Scanner;
import java.text.DecimalFormat;
import java.math.RoundingMode;

class Main {

  public static void main(String[] args) {
    final Scanner sc = new Scanner(System.in);
    final DecimalFormat df = new DecimalFormat("0.0000");
    df.setRoundingMode(RoundingMode.HALF_EVEN);
    while (sc.hasNextInt()) {
      int n = sc.nextInt();
      double[] v = new double[n];
      for (int i = 0; i < n; ++i) v[i] = sc.nextDouble();
      Solution.insertionSort(v);
      for (int i = 0; i < n; ++i) System.out.print(" " + df.format(v[i]));
      System.out.println();
    }
  }

}
