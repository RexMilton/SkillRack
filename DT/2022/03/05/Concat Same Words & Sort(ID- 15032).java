import java.util.*;

public class Hello {

     public static void main(String[] args) {
          Scanner q = new Scanner(System.in);
          ArrayList<String> z = new ArrayList<String>(), p = new ArrayList<String>();
          while (q.hasNext()) {
               String t = q.next();
               if (z.contains(t) && !p.contains(t)) {
                    z.remove(z.indexOf(t));
                    z.add(t + t);
                    p.add(t + t);
               } else
                    z.add(t);
          }
          Collections.sort(z);
          for (String i : z)
               System.out.print(i + " ");
     }
}