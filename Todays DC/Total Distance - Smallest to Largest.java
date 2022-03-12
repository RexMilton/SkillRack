import java.util.*;
public class Hello {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt(),c=sc.nextInt();
        int matrix[][]=new int[r][c];
        HashMap<Integer,String> d=new HashMap<>();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                matrix[i][j]=sc.nextInt();
               String temp=Integer.toString(i)+","+Integer.toString(j);
               d.put(matrix[i][j],temp);
            }
        }
       TreeMap<Integer,String> dict = new TreeMap<Integer,String>(d);
       //dict.forEach((key,value) -> System.out.println(key+":"+value));
       ArrayList<String> pos=new ArrayList<String>();
       ArrayList<Integer> num=new ArrayList<Integer>();
       for(Map.Entry temp : dict.entrySet()){
           int t=(Integer)temp.getKey();
           String s=temp.getValue().toString();
           pos.add(s);
           num.add(t);
       }
       int total=0;
       for(int i=0;i<num.size()-1;i++){
           int x1,y1,x2,y2;
           String s1[]=pos.get(i).split(",");
           String s2[]=pos.get(i+1).split(",");
           x1=Integer.parseInt(s1[0]);
           y1=Integer.parseInt(s1[1]);
           x2=Integer.parseInt(s2[0]);
           y2=Integer.parseInt(s2[1]);
           total+=Math.max(Math.abs(x1-x2),Math.abs(y1-y2));
       }
       System.out.print(total);
    }
}