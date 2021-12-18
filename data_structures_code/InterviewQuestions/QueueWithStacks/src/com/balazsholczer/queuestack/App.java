package com.balazsholczer.queuestack;

public class App {

	public static void main(String[] args) {
		
//		Queue queue = new Queue();
//		
//		queue.enqueue(10);
//		queue.enqueue(5);
//		queue.enqueue(20);
//		
//		System.out.println(queue.dequeue());
//		
//		queue.enqueue(100);
//		
//		System.out.println(queue.dequeue());
//		System.out.println(queue.dequeue());
//		System.out.println(queue.dequeue());
		
		OneStackQueue oneStackQueue = new OneStackQueue();
		
		oneStackQueue.enqueue(10);
		oneStackQueue.enqueue(5);
		oneStackQueue.enqueue(20);
		
		System.out.println(oneStackQueue.dequeue());
		
		oneStackQueue.enqueue(100);
		
		System.out.println(oneStackQueue.dequeue());
		System.out.println(oneStackQueue.dequeue());
		System.out.println(oneStackQueue.dequeue());
		
	}
}
