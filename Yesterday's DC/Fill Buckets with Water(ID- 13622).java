import java.util.*;

public class Hello {

    public static void main(String[] args) {
        Scanner q = new Scanner(System.in);
        int n = q.nextInt();
        ArrayList<Integer> z = new ArrayList<Integer>();
        for (int i = 0; i < n; i++)
            z.add(q.nextInt());
        int cap = q.nextInt(), t = 0;
        for (t = 0; t < n && z.get(t) >= cap; t++)
            ;
        int p = 0;
        if (t < n)
            p = z.get(t);
        for (int i = t + 1; i < n; i++) {
            int y = z.get(i);
            y += p;
            z.set(i, Math.min(y, cap));
            if (y < cap) {
                z.set(t, -1);
                t = i;
                p = y;
            } else {
                p = y - cap;
                z.set(t, p);
            }
        }
        z.removeIf(x -> (x < 1));
        for (int i : z)
            System.out.print(i + " ");
    }
}