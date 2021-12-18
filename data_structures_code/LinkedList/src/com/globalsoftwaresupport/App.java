package com.globalsoftwaresupport;

public class App {

	public static void main(String[] args) {
		
		LinkedList<Person> people = new LinkedList<>();
		
		Person p = new Person(23, "Adam");
		
		people.insert(p);
		people.insert(new Person(34, "Daniel"));
		people.insert(new Person(56, "Michale"));
		
		people.remove(p);
		people.traverse();

	}

}
