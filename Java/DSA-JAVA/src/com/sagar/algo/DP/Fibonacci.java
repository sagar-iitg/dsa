package com.sagar.algo.DP;

import java.util.Scanner;

public class Fibonacci {

	
	 private static int fibo(int n) {
		
		 
		int[] f=new int[n+2];
		f[0]=0;
		f[1]=1;
		
		for (int i = 2; i <= n; i++)
	    {
	      
	        f[i] = f[i-1] + f[i-2];
	    }
		return f[n];
		
		
	}
	
	public static void main(String[] args) {
		
		Fibonacci f=new Fibonacci();
		int n;
		Scanner scanner=new Scanner(System.in);
		n=scanner.nextInt();
		scanner.close();
		System.out.println(f.fibo(n));
		System.out.println(f.getClass());
	}
}
