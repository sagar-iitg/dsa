package com.balazsholczer.middlenode;

public class LinkedList<T extends Comparable<T>> implements List<T> {

    private Node<T> head;
    private int sizeCounter;

    @Override
    public void reverse() {
    	
    	Node<T> currentNode = this.head;
    	Node<T> previousNode = null;
    	Node<T> nextNode = null;
    	
    	while(currentNode!=null) {
    		nextNode = currentNode.getNextNode();
    		currentNode.setNextNode(previousNode);
    		previousNode = currentNode;
    		currentNode = nextNode;
    	}
    	
    	this.head = previousNode;
    }
    
    @Override
    public void insert(T data) {
        ++this.sizeCounter;

        if (head == null) {
            head = new Node<>(data);
        } else {
            insertDataBeginning(data);
        }
    }

    @Override
    public void remove(T data) {

        if (this.head == null) {
            return;
        }

        --this.sizeCounter;

        if (this.head.getData().compareTo(data) == 0) {
            this.head = this.head.getNextNode();
        } else {
            remove(data, head, head.getNextNode());
        }
    }

    @Override
    public void traverseList() {

        if (this.head == null) {
            return;
        }

        Node<T> node = this.head;

        while (node != null) {
            System.out.print(node + " ");
            node = node.getNextNode();
        }
    }

    // O(1) constant time complexity, update the references
    private void insertDataBeginning(T data) {

        Node<T> newNode = new Node<>(data);
        newNode.setNextNode(head);
        this.head = newNode;
    }

    // O(N) inserting at the end
    private void insertDataEnd(T data, Node<T> node) {

        if (node.getNextNode() != null) {
            insertDataEnd(data, node.getNextNode());
        } else {
            Node<T> newNode = new Node<>(data);
            node.setNextNode(newNode);
        }
    }

    private void remove(T dataToRemove, Node<T> previousNode, Node<T> actualNode) {

        while (actualNode != null) {

            if (actualNode.getData().compareTo(dataToRemove) == 0) {
                previousNode.setNextNode(actualNode.getNextNode());
                actualNode = null;
                return;
            }

            previousNode = actualNode;
            actualNode = actualNode.getNextNode();
        }
    }

	@Override
	public int size() {
		return this.sizeCounter;
	}
}
