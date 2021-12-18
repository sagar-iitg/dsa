package com.globalsoftwaresupport;

public class Stack<T> {

	// the LIFO last item we inserted is the first one we take out
	// when the pop() method is called
	private Node<T> head;
	private int count;
	
	// O(1) 
	public void push(T data) {
		
		count++;
		
		// this is when the linked list is empty
		if(head == null) {
			head = new Node<>(data);
		} else {
			// the inked list already contains some items
			Node<T> oldHead = head;
			head = new Node<>(data);
			head.setNextNode(oldHead);
		}
	}
	
	// removes the last item we have inserted O(1)
	public T pop() {
		
		if(isEmpty()) return null;
		
		T item = head.getData();
		head = head.getNextNode();
		count--;
		return item;
	}
	
	// O(1)
	public int size() {
		return count;
	}
	
	// O(1)
	public boolean isEmpty() {
		return count == 0;
	}
}
