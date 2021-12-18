package com.globalsoftwaresupport;

import java.util.Stack;

public class App {

	public static void main(String[] args) {
		
		Stack<String> stack = new Stack<>();
		
		// push() - O(1)
		stack.push("Adam");
		stack.push("Bill");
		stack.push("Jeff");
		stack.push("Elon");
		
		// peek() runs in O(1) and returns the last item we have inserted
		// WITHOUT REMOVING IT !!!
		// System.out.println(stack.peek());
		// System.out.println(stack.size());
		
		// pop() in O(1) that is going to remove the last item (+ returns the value)
		// System.out.println(stack.pop());
		// System.out.println(stack.size());
		
		while(!stack.isEmpty())
			System.out.println(stack.pop());

	}
}
