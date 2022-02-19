import java.util.*;
public class Hello {

    public static void main(String[] args) {
        int n=new Scanner(System.in).nextInt();
        ArrayList<Double> z=new ArrayList<Double>();
        double l=0,p=1;
        while(z.size()<n){
            double t=p;
            p*=7;
            double y=z.size();
            z.add(t);
            for(int i=0;i<y;i++)
            z.add(z.get(i)+t);
        }
        for(int i=0;i<n;i++)
        System.out.print((int)Math.round(z.get(i))+" ");
    }
}