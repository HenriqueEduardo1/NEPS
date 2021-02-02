import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashMap;
public class soma{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        ArrayList<Integer> x1 = new ArrayList<>();
        ArrayList<Integer> psa = new ArrayList<>();
 
        HashMap<Long, Long> m = new HashMap<>();
 
        int n = in.nextInt();
        long k = in.nextInt();
        long resp = 0;
 
        x1.add(0);
        psa.add(0);
 
        for(int i = 1; i <= n; i++){
            x1.add(in.nextInt());
            psa.add(x1.get(i) + psa.get(i-1));
        }
        for(int i = 0; i <= n; i++){
            long s = psa.get(i);
            if(m.containsKey(s - k)){
                resp += m.get(s-k);
            }
            if(m.containsKey(s)){
                m.put(s, m.get(s) + 1);
            }
            else{
                m.put(s,(long)1);
            }
        }  
        System.out.print(resp);
    }
}