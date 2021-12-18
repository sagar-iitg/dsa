package com.balazsholczer.middlenode;

public interface List<T extends Comparable<T>> {
	public Node<T> getMiddleNode();
    public void insert(T data);
    public void remove(T data);
    public void traverseList();
    public int size();
}
