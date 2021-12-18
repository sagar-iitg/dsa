package com.balazsholczer.tree;

public interface Tree<T> {
	public Node<T> getKSmallest(Node<T> node, int k);
	public Node<T> getRoot();
	public void traversal();
	public void insert(T data);
	public void delete(T data);
	public T getMaxValue();
	public T getMinValue();
}
