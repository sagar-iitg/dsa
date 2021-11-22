package com.sagar.common.question;

import java.util.Scanner;

public class GenearteAllSubarrays {

	private void printSubArray(int[] arr, int n) {

		System.out.println("\ninside subarray");

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				for (int k = i; k <= j; k++) {
					System.out.print(arr[k]);
				}
				System.out.println();
			}
		}
	}

	public static void main(String[] args) {

		GenearteAllSubarrays arraysum = new GenearteAllSubarrays();
		Scanner sc = new Scanner(System.in);
		int n;

		System.out.print("Enter the number of elements you want to store: ");
		n = sc.nextInt();

		int[] arr = new int[10];
		System.out.println("Enter Elements of the array: ");
		for (int i = 0; i < n; i++) {
			arr[i] = sc.nextInt();
		}
		sc.close();
		System.out.println("Array Elements are:");
		for (int i = 0; i < n; i++) {
			System.out.print(arr[i] + " ");
		}
		arraysum.printSubArray(arr, n);

	}

}
