import java.util.*;

public class squareRoot{

	static double sqrt(int n,int p){
		double root=n;
		double increment=1.0/Math.pow(10,p);
    //fastest(newton raphson method)
		while(Math.abs(root*root-n)>increment){
			root=(root+n/root)/2.0;
			System.out.println(root);
		}
		return root;

		/*
    //slowed
		int integerPart=0;
		while(integerPart*integerPart<=n){
			integerPart++;
		}
		integerPart--;

		root=0.0;

		for(int i=0; i<p; i++){
			while(root*root<=n){
				root+=increment;
				System.out.println(i+" "+root);
			}
			root-=increment;
			increment/=10;
		}
		return root;
		*/
	}

	public static void main(String []args){
		int n=40;
		int p=4;

		System.out.println(sqrt(n,p));
	}
}
