package TST;

public class Node {

	private char character;
	private Node leftNode;
	private Node middleNode;
	private Node rightNode;
	private int value;

	public Node(char character) {
		this.character = character;
	}

	public char getCharacter() {
		return character;
	}

	public void setCharacter(char character) {
		this.character = character;
	}

	public Node getLeftNode() {
		return leftNode;
	}

	public void setLeftNode(Node leftNode) {
		this.leftNode = leftNode;
	}

	public Node getMiddleNode() {
		return middleNode;
	}

	public void setMiddleNode(Node middleNode) {
		this.middleNode = middleNode;
	}

	public Node getRightNode() {
		return rightNode;
	}

	public void setRightNode(Node rightNode) {
		this.rightNode = rightNode;
	}

	public int getValue() {
		return value;
	}

	public void setValue(int value) {
		this.value = value;
	}
}
