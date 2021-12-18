package com.globalsoftwaresupport;

public class SplayTree<T extends Comparable<T>> implements Tree<T> {

	private Node<T> root;
	
	@Override
	public void insert(T data) {
		// this is when we insert the first node into the BST (parent is null)
		if(root==null) {
			root = new Node<>(data, null);
		} else {
			// there are already items in the BST
			insert(data, root);
		}
	}
	
	@Override
	public T getRoot() {
		
		if(root == null) return null;
		
		return root.getData();
	}
	
	@Override
	public T find(T data) {
		if(root==null) return null;
		
		return find(data, root);
	}

	private void insert(T data, Node<T> node) {		
		if(node.getData().compareTo(data) > 0) {
			if( node.getLeftChild() != null ) {
				insert(data, node.getLeftChild());
			} else {
				Node<T> newNode = new Node<>(data, node);
				node.setLeftChild(newNode);
				// we have to do splaying (have to make rotations)
				// splay(newNode);
			}
		} else {
			if( node.getRightChild() != null ) {
				insert(data, node.getRightChild());
			} else {
				Node<T> newNode = new Node<>(data, node);
				node.setRightChild(newNode);
				// splay(newNode);
			}
				
		}	
	}

	private T find(T data, Node<T> node) {
		// this is when we look for a given item in the tree
		if (data.compareTo(node.getData()) < 0) {
			find(data, node.getLeftChild());
		} else if ( data.compareTo(node.getData()) > 0 ) {
			find(data, node.getRightChild());
		} else {
			// WE HAVE FOUND THE ITEM WE ARE LOOKING FOR
			splay(node);
			return data;
		}
		
		return null;
	}

	// this is when we make rotations on the new node to become the root node
	private void splay(Node<T> node) {
		
		// while the node is not the root node
		while(node.getParentNode() != null) {
			
			// if the grandparent is null it means that we have to make a simple rotation
			// ZIG CASE
			if (node.getParentNode().getParentNode() == null) {
				// if the node is the left child of the root then RIGHT ROTATE on the root
				if (node.getParentNode().getLeftChild() == node) {
					rightRotation(node.getParentNode());
				// if the node is the right child of the root then LEFT ROTATE on the root
				} else {
					leftRotation(node.getParentNode());
				}
			// ZIG-ZIG SITUATEION
			} else if (node.getParentNode().getLeftChild() == node
					&& node.getParentNode().getParentNode().getLeftChild() == node.getParentNode()) {
				rightRotation(node.getParentNode().getParentNode());
				rightRotation(node.getParentNode());
				// this is the symmetric partner of the ZIG-ZIG situation
			} else if (node.getParentNode().getRightChild() == node
					&& node.getParentNode().getParentNode().getRightChild() == node.getParentNode()) {
				leftRotation(node.getParentNode().getParentNode());
				leftRotation(node.getParentNode());
			// ZIG-ZAG SITUATION
			} else if (node.getParentNode().getLeftChild() == node
					&& node.getParentNode().getParentNode().getRightChild() == node.getParentNode()) {
				rightRotation(node.getParentNode());
				leftRotation(node.getParentNode());		
			} else {
				leftRotation(node.getParentNode());
				rightRotation(node.getParentNode());
			}
		}	
	}
	
	private void rightRotation(Node<T> node) {
		System.out.println("Rotating to the right on node: " + node);

		Node<T> tempLeftNode = node.getLeftChild();
		Node<T> grandChild = tempLeftNode.getRightChild();

		// make the rotation
		tempLeftNode.setRightChild(node);
		node.setLeftChild(grandChild);
		
		if(grandChild != null)
			grandChild.setParentNode(node);
		
		Node<T> tempParent = node.getParentNode();
		node.setParentNode(tempLeftNode);
		tempLeftNode.setParentNode(tempParent);
		
		// handle the root node (after rotation) AND handle the parent node (we have to make an update)
		if(tempLeftNode.getParentNode() != null && tempLeftNode.getParentNode().getLeftChild() == node) 
			tempLeftNode.getParentNode().setLeftChild(tempLeftNode);
			
		// the parent node's right child is the new root node
		if(tempLeftNode.getParentNode() != null && tempLeftNode.getParentNode().getRightChild() == node) {
			tempLeftNode.getParentNode().setRightChild(tempLeftNode);
			System.out.println("tempLeftNode.getParentNode().setRightChild(tempLeftNode);");
		}
			
		// no parent after rotation because it has become the root node
		if(node == root)
			root = tempLeftNode;
	}
	
	private void leftRotation(Node<T> node) {

		System.out.println("Rotating to the left on node:" + node);

		Node<T> tempRightNode = node.getRightChild();
		Node<T> t = tempRightNode.getLeftChild();

		tempRightNode.setLeftChild(node);
		node.setRightChild(t);
		
		if(t != null)
			t.setParentNode(node);
		
		Node<T> tempParent = node.getParentNode();
		node.setParentNode(tempRightNode);
		tempRightNode.setParentNode(tempParent);
		
		if(tempRightNode.getParentNode() != null && tempRightNode.getParentNode().getLeftChild() == node)
			tempRightNode.getParentNode().setLeftChild(tempRightNode);
		
		if(tempRightNode.getParentNode() != null && tempRightNode.getParentNode().getRightChild() == node)
			tempRightNode.getParentNode().setRightChild(tempRightNode);

		if(node == root)
			root = tempRightNode;
	}

	@Override
	public void traverse() {
		if(root!=null)
			traverse(root);
	}

	private void traverse(Node<T> node) {
		if(node.getLeftChild()!=null)
			traverse(node.getLeftChild());
		
		System.out.println(node + " - ");
		
		if(node.getRightChild()!=null)
			traverse(node.getRightChild());
	}
}
