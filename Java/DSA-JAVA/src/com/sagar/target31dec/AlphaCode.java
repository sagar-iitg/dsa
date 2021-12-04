package com.sagar.target31dec;

public class AlphaCode {

	
	public static void main(String[] args) {
		
		char arr[]= {'1','2','3','4','5'};
		System.out.println(arr);
		int n=arr.length;
		System.out.printf("Count is %d",countWays(arr,n));
	}

	private static int  countWays(char[] arr, int n) {
		
		if(n==0) {
			return 0;
		}
		if(n==1 && arr[0]==0) {
			return 0;
		}
		return countDecoding(arr,n);
	}

	private static int countDecoding(char[] arr, int n) {
		
		
		return 0;
	}
}
