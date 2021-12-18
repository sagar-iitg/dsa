package com.globalsoftwaresupport;

import java.util.Comparator;

public class Person implements Comparable<Person> {

	private int age;
	private String name;
	
	public Person(int age, String name) {
		super();
		this.age = age;
		this.name = name;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		this.age = age;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	@Override
	public String toString() {
		return name;
	}

	@Override
	public int compareTo(Person o) {
		return Comparator.comparing(Person::getName).
				thenComparingInt(Person::getAge).compare(this, o);
	}	
}
