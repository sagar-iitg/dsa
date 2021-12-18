package com.balazsholczer.middlenode;

public class App {

	public static void main(String[] args) {

		List<Integer> myLinkedList = new LinkedList<>();

		myLinkedList.insert(10);
		myLinkedList.insert(2);
		myLinkedList.insert(13);
		myLinkedList.insert(5);
		
		myLinkedList.traverseList();
		myLinkedList.reverse();
		System.out.println();
		myLinkedList.traverseList();
	}
}
