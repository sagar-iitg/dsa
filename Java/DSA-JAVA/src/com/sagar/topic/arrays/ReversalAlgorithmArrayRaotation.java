package com.sagar.topic.arrays;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class ReversalAlgorithmArrayRaotation {

	static private void Rotation(ArrayList<Integer> arr, int d) {

		int n = arr.size();
		System.out.println("Original Array is: ");
		System.out.println(arr);
//		for (int i = 0; i < arr.size(); i++) {
//			System.out.print(arr.get(i) + " ");
//		}
		// Algorithm Rotate
		ArrayList<Integer> a = new ArrayList<>();
		for (int i = 0; i < d; i++) {
			a.add(arr.get(i));
		}
		// System.out.println(a);

		for (int i = 0; i < n - d; i++) {
			arr.set(i, arr.get(i + d));
		}
		// System.out.println(arr);
		for (int i = n - 1; i >= n - d; i--) {
			arr.remove(i);
		}
		// System.out.println(arr);
		Collections.reverse(a);
		arr.addAll(a);
		System.out.println(arr);

	}

	public static void main(String[] args) {

		ReversalAlgorithmArrayRaotation ans = new ReversalAlgorithmArrayRaotation();
		ArrayList<Integer> arr = new ArrayList<Integer>(Arrays.asList(1, 2, 3, 4, 5, 6));
		// System.out.println(arr);
		int d;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter d: (Rotation)");
		d = sc.nextInt();
		Rotation(arr, d);
	}

}
