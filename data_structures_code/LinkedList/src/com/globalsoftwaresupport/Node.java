package com.globalsoftwaresupport;

public class Node<T extends Comparable<T>> {

	// this is the data we store in the data structure
	private T data;
	// this is why linked lists need more memory than arrays
	private Node<T> nextNode;
	
	public Node(T data) {
		this.data = data;
	}

	public T getData() {
		return data;
	}

	public void setData(T data) {
		this.data = data;
	}

	public Node<T> getNextNode() {
		return nextNode;
	}

	public void setNextNode(Node<T> nextNode) {
		this.nextNode = nextNode;
	}

	@Override
	public String toString() {
		return ""+data;
	}
}
