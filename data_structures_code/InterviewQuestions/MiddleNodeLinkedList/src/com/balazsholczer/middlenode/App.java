package com.balazsholczer.middlenode;

public class App {

	public static void main(String[] args) {

		List<Integer> myLinkedList = new LinkedList<>();

		myLinkedList.insert(10);
		myLinkedList.insert(2);
		myLinkedList.insert(13);
		myLinkedList.insert(5);
		myLinkedList.insert(6);
		myLinkedList.insert(7);
		myLinkedList.insert(8);
		myLinkedList.insert(9);
		myLinkedList.insert(10);
		
		System.out.println(myLinkedList.getMiddleNode());
	}
}
