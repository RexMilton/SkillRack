import java.util.*;
public class Hello {
    public static List<String> z=new ArrayList<String>();
    public static int n;
    
    public static String fun(int x){
        int pre=x-1,next=x+1;
        if(pre==-1)
        pre=n-1;
        if(next==n)
        next=0;
        String pr=z.get(pre),s=z.get(x);
        char pi=pr.charAt(pr.length()-1),ni=z.get(next).charAt(0);
        int st=0,end=s.length()-1;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)==pi){
                pi='-';
                st=i;
            }
            if(s.charAt(i)==ni){
                end=i;
            }
        }
        if(st>end){
            int t=st;
            st=end;
            end=t;
        }
        return s.substring(st,end+1);
    }
    
    public static void main(String[] args) {
        Scanner q=new Scanner(System.in);
        n=q.nextInt();
        q.nextLine();
        for(int i=0;i<n;i++){
            z.add(q.next());
        }
        for(int i=0;i<n;i++){
            System.out.println(fun(i));
        }
    }
}