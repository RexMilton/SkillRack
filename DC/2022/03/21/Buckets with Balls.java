import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt(),c=sc.nextInt();
        int mat[][]=new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mat[i][j]=sc.nextInt();
            }
        }
        int count=0;
        int x=sc.nextInt();
        for(int i=r-1;i>-1;i--){
            if(i<r-1){ for(int j=0;j<c;j++){
                mat[i][j]+=mat[i+1][j];
            }}
            for(int j=0;j<c;j++){
                if(mat[i][j]>=x){
                    count+=1;
                    mat[i][j]=0;
                }
            }
        }
        System.out.println(count*x);
	}
}