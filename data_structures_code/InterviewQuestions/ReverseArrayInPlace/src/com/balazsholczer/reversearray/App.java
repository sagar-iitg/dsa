package com.balazsholczer.reversearray;

public class App {

	public static void main(String[] args) {
		
		int[] nums = {1,2,3,4};
		
		ReverseArray reverseArray = new ReverseArray();
		
		int[] reversedArray = reverseArray.reverseArray(nums);
		
		for(int i=0;i<reversedArray.length;i++) {
			System.out.print(reversedArray[i]+" ");
		}
	}
}
