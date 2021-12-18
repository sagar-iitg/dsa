package com.balazsholczer.heap;

public class App {

	public static void main(String[] args) {
		
		CheckHeap checkHeap = new CheckHeap();
		
		int[] array = {100,10,14,19,26,31,42,27,44,35,33,35};
		
		System.out.println(checkHeap.isMinHeap(array));
		
	}
}
