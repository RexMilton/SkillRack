import java.util.*;
public class Hello {

    public static void main(String[] args) {
        Scanner q=new Scanner(System.in);
        String s1=q.nextLine(),s2=q.nextLine();
        int i1=0,i2=0,ct=0;
        while(i1<s1.length()){
            if(s1.charAt(i1)!=s2.charAt(i2)){
                while(s1.charAt(i1)!=s2.charAt(i2)){
                    i2++;
                }
                ct++;
            }
            i1++;
            i2++;
        }
        if(i2<s2.length()){
            ct+=1;
        }
        System.out.println(ct);
    }
}