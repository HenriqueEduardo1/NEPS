import java.util.Scanner;
import java.util.ArrayList;
public class quasePrimo{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> p = new ArrayList<>();

        long n = in.nextInt();
        long k = in.nextInt();
        long resp = 0, cont = 0;

        for(int i = 0; i < k; i++){
            p.add(in.nextInt()); 
        }
        for(int i = 1; i <= n; i++){
            for(int p1 : p){
                if((i % p1 != 0)){ cont++; }
                else{break;}
            }
            if(cont == k){ resp++; cont = 0; }
            else{cont = 0;}
        }
        System.out.print(resp);
    }
}