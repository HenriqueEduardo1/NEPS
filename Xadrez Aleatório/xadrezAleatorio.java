import java.util.Scanner;
public class xadrezAleatorio{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt();
        int t = in.nextInt();

        if(t==0){ System.out.println(n); }
        else if(t==1){ System.out.println(n*(n-1)); }
        else{ System.out.println((n*(n-1)*(n-2))/6); }
    }
}