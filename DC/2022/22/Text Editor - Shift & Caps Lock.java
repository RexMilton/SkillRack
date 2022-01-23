import java.util.*;
public class Hello {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s[]=sc.nextLine().split(" ");
        boolean f=false;
        for(String x: s){
            if (x.equals("CAPSLOCK")){
                if(f) f=false;
                else f=true;
            }
            else if (x.charAt(0)=='S' && x.length()>5){
                String t[]=x.split("T");
                if(!f) System.out.print(t[1].substring(1).toUpperCase());
                else System.out.print(t[1].substring(1).toLowerCase());
            }
            else if(f) System.out.print(x.toUpperCase());
            else System.out.print(x);
        }

	}
}
