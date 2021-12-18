package com.globalsoftwaresupport;

public class App {

	public static void main(String[] args) {
		
		Tree<Integer> splayTree = new SplayTree<>();
		
		splayTree.insert(32);
		splayTree.insert(10);
		splayTree.insert(55);
		splayTree.insert(1);
		splayTree.insert(19);
		splayTree.insert(41);
		splayTree.insert(16);
		splayTree.insert(12);
		
		splayTree.find(12);
		System.out.println(splayTree.getRoot());
	}

}
