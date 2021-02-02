import java.util.Scanner;
import java.util.HashMap;
public class quadradinhoDe8{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
 
        HashMap<Long, Long> m = new HashMap<>();
 
        int n = in.nextInt();
        long resp = 0;
        m.put((long)0, (long)1);
        int x1;
 
        long s = 0;
 
        for(int i = 1; i <= n; i++){
            x1 = in.nextInt();
            s = (s+x1)%8;

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