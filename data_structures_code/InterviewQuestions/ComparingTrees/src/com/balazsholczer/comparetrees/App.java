package com.balazsholczer.comparetrees;

public class App {

	public static void main(String[] args) {
		
		Tree<Integer> bst1 = new BinarySearchTree<>();
		
		bst1.insert(2);
		bst1.insert(55);
		bst1.insert(67);
		bst1.insert(12);
		bst1.insert(11);
		
		Tree<Integer> bst2 = new BinarySearchTree<>();
		
		bst2.insert(2);
		bst2.insert(50);
		bst2.insert(67);
		bst2.insert(12);
		bst2.insert(11);
		
		TreeCompareHelper<Integer> helper = new TreeCompareHelper<>();
		System.out.println(helper.compareTrees(bst1.getRoot(), bst2.getRoot()));
	}
}
