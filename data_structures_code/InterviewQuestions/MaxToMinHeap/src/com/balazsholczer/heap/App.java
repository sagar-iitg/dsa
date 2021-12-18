package com.balazsholczer.heap;

public class App {

	public static void main(String[] args) {
		
		int[] maxHeap = {210,100,23,2,5};
		
		HeapConverter heapConverter = new HeapConverter(maxHeap);
		
		int[] minHeap = heapConverter.transform();
		
		for(int i=0;i<minHeap.length;i++)
			System.out.print(minHeap[i]+" ");
	}
}
