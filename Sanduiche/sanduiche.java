import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashMap;
public class sanduiche{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> x1 = new ArrayList<>();
        HashMap<Integer, Integer> m = new HashMap<>();

        int n = in.nextInt();
        int d = in.nextInt();
        int s = 0;
        int resp = 0, t = 0;
 
        m.put(0, 1);
 
        for(int i = 0; i < n; i++){
            x1.add(in.nextInt());
            t += x1.get(i);
        }
        for(int i = 0; i < n; i++){
            s += x1.get(i);
            if(m.containsKey(s - d)){
                resp += m.get(s-d);
            }
            if(m.containsKey(s)){
                m.put(s, m.get(s) + 1);
            }
            else{
                m.put(s, 1);
            }
            if((i < n - 1) && ((s - (t - d)) != 0)){
                if(m.containsKey(s - (t - d))){
                    resp += m.get(s - (t - d));
                }
            }
        }  
        System.out.println(resp);
    }
}