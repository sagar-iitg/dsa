package com.balazsholczer.reservoir;

public class App {

	public static void main(String[] args) {
		
		int[] nums = {13,65,46,11,71,50,12,5,81,97,28,74,87,68,42,31,40,37,43,25};
		int k = 5;
		
		ReservoirSampling reservoirSampling = new ReservoirSampling();
		reservoirSampling.solve(nums, k);
	}
}
