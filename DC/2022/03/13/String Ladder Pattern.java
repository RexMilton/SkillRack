import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s1=sc.nextLine().trim(),s2=sc.nextLine().trim();
		int n=sc.nextInt(),l=s1.length(),l2=s2.length();
		int f=0;
		System.out.println(s1.charAt(0)+"*".repeat(l2-2)+s1.charAt(0));
		for(int i=0;i<n;i++){
		    char x;
		    if(f==0){
		        for(int j=1;j<l-1;j++){
		            x=s1.charAt(j);
		            System.out.println(x+"*".repeat(l2-2)+x);
		        }
		        f=1;
		    }
		    else{
		        for(int j=l-2;j>0;j--){ 
		            x=s1.charAt(j);
		            System.out.println(x+"*".repeat(l2-2)+x);
		        }
		        f=0;
		    }
		    System.out.println(s2);
		}
		if(f==0){
		    for(int j=1;j<l;j++){
		        char x=s1.charAt(j);
		        System.out.println(x+"*".repeat(l2-2)+x);
		    }
		}
		else{
		    for(int j=l-2;j>=0;j--){
		        char x=s1.charAt(j);
		        System.out.println(x+"*".repeat(l2-2)+x);
		    }
		}
		
	}
}
