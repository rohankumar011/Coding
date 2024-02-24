import java.util.*;
import java.lang.Math;

public class leet {
    public static void main(String[] args) {
        ArrayList<Integer> cars = new ArrayList<Integer>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        int n = sc.nextInt();
        int b = n;
        for (int i = n; i >= 1; i--) {
            if (n > 0) {
                int sr = (int) Math.sqrt(n);
                // System.out.println(sr);
                int a = sr * sr;
                System.out.println(a);
                if (a == n) {

                cars.add(n);
                n = b - n;
                b = n;
                n++;

                }

            }
            n--;
        }
        System.out.println(cars);
        sc.close();
    }
}
