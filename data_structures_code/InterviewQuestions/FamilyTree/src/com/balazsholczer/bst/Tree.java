package com.balazsholczer.bst;

public interface Tree<T> {
	public int getAgesSum();
	public void traversal();
	public void insert(T data);
	public void delete(T data);
	public T getMaxValue();
	public T getMinValue();
}
