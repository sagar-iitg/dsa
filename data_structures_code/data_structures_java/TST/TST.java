package TST;

public class TST {

	private Node rootNode;
	
	public void put(String key, int value){
		rootNode = put(rootNode,key,value,0);
	}

	private Node put(Node node, String key, int value, int index) {
		
		char c = key.charAt(index);
		
		if( node == null ){
			node = new Node(c);
		}
		
		if( c < node.getCharacter() ){
			node.setLeftNode(put(node.getLeftNode(),key,value,index));
		}else if( c > node.getCharacter() ){
			node.setRightNode(put(node.getRightNode(),key,value,index));
		}else if( index < key.length()-1 ){
			node.setMiddleNode(put(node.getMiddleNode(),key,value,index+1));
		}else{
			node.setValue(value);
		}
		
		return node;
	}
	
	public Integer get(String key){
		
		Node node = get(rootNode,key,0);
		
		if( node == null ){
			return null;
		}
		
		return node.getValue();
	}

	private Node get(Node node, String key, int index) {
		
		if( node == null ) return null;
		
		char c = key.charAt(index);
		
		if( c < node.getCharacter() ){
			return get(node.getLeftNode(),key,index);
		}else if( c > node.getCharacter() ){
			return get(node.getRightNode(), key, index);
		}else if( index < key.length()-1){
			return get(node.getMiddleNode(),key,index+1);
		}else{
			return node;
		}
		
	}

}
