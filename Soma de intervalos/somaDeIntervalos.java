import java.util.Scanner;
import java.util.ArrayList;
public class somaDeIntervalos{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        ArrayList<Integer> x = new ArrayList<>();
        ArrayList<Integer> y = new ArrayList<>();

        int v1 = in.nextInt();
        int q = in.nextInt();

        x.add(0);
        y.add(0);

        for(int i = 1; i <= v1; i++){
            x.add(in.nextInt());
            y.add(x.get(i) + y.get(i-1));
        }

        for(int i = 0; i < q; i++){
            int n1 = in.nextInt();
            int n2 = in.nextInt();
            System.out.println(y.get(n2) - y.get(n1-1));
        }
    }
}