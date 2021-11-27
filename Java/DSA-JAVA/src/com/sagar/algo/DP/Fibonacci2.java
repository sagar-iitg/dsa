package com.sagar.algo.DP;

import java.util.Scanner;

public class Fibonacci2 {

	
	
	
	public static int fibo(int n) {
		if(n==0) {
			return 0;
		}
		if(n==1) {
			return 1;
		}
		
		return fibo(n-1)+fibo(n-2);
		
		
	}
	
	public static void main(String[] args) {
		
		int n;
		Scanner scanner=new Scanner(System.in);
		n=scanner.nextInt();
		scanner.close();
		System.out.println(fibo(n));
	}
}
