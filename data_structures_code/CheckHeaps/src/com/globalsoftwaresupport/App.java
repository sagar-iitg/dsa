package com.globalsoftwaresupport;

public class App {

	public static void main(String[] args) {
		
		int[] nums = {-2, 0, 5, 4};
		CheckHeap checkHeap = new CheckHeap();
		System.out.println(checkHeap.isMinHeap(nums));
	}
}
