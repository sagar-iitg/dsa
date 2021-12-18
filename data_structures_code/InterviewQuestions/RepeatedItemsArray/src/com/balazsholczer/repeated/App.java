package com.balazsholczer.repeated;

public class App {

	public static void main(String[] args) {
		
		int[] array = {2,3,1,2,4,3};
		
		RepeatedIntegersProblem repeatedIntegersProblem = new RepeatedIntegersProblem();
		repeatedIntegersProblem.solve(array);
	}
}
