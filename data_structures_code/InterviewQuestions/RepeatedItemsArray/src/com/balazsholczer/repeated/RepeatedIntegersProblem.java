package com.balazsholczer.repeated;

public class RepeatedIntegersProblem {

	public void solve(int[] array) {
		
		//this is why it is an O(N) running time algorithm
		for(int i=0;i<array.length;++i) {
			
			//if this value is positive we have to flip
			if( array[Math.abs(array[i])] > 0 ) {
				array[Math.abs(array[i])] = -array[Math.abs(array[i])];
			//otherwise it is negative: it means repetition
			} else {
				System.out.println(Math.abs(array[i]) + " is a repetition!");
			}
		}
	}
}
