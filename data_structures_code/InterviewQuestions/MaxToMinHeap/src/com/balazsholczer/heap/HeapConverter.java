package com.balazsholczer.heap;

public class HeapConverter {

	//represent the heap with a one-dimensional array
	private int[] heap;
	
	public HeapConverter(int[] heap) {
		this.heap = heap;
	}
	
	public int[] transform() {
		
		//we do not have to consider leaf nodes (thats why the last node we have to consider has index (length-2)/2
		for(int i=((heap.length-2)/2);i>=0;i--) {
			//we "heapify" all the internal nodes: we check whether the parent is smaller than the children
			//if not: than we swap the nodes accordingly
			heapify(i);
		}
		
		return this.heap;
	}
	
	//argument is the index of an internal node in the heap
	private void heapify(int index) {
		
		//index of the left child
		int leftChildIndex = 2*index+1;
		//index of the right child
		int rightChildIndex = 2*index+2;
		
		//index of the smallest child node
		int smallest = index;
		
		//check the left child whether it is smaller than the parent
		if(leftChildIndex<heap.length && heap[leftChildIndex]<heap[index])
			smallest = leftChildIndex;
		
		//compare the right child and the left child
		if(rightChildIndex<heap.length && heap[rightChildIndex]<heap[smallest])
			smallest = rightChildIndex;
		
		//we do not want to swap the node with itself only when necessary
		if(smallest!=index) {
			swap(smallest,index);
			//call the method recursively on the child
			heapify(smallest);
		}
	}

	private void swap(int index1, int index2) {
		int temp = heap[index1];
		heap[index1] = heap[index2];
		heap[index2] =temp;
	}
}
