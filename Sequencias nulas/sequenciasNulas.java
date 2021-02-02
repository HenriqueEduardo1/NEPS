import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashMap;
public class sequenciasNulas{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        ArrayList<Integer> x1 = new ArrayList<>();
        ArrayList<Integer> psa = new ArrayList<>();
        HashMap<Long, Long> m = new HashMap<>();

        int n = in.nextInt();
        long resp = 0;

        m.put((long)0, (long)1);
        x1.add(0);
        psa.add(0);

        for(int i = 1; i <= n; i++){
            x1.add(in.nextInt());
            psa.add(x1.get(i) + psa.get(i-1));

            long s = psa.get(i);
            if(m.containsKey(s)){
                resp += m.get(s);
                m.put(s, m.get(s) + 1);
            }
            else{
                m.put(s,(long)1);
            }
        }  
        System.out.println(resp);
    }
}