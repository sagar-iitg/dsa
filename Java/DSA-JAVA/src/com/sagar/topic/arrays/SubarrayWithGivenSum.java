package com.sagar.topic.arrays;

import java.util.Scanner;

public class SubarrayWithGivenSum {

	private boolean subArraySum(int[] arr, int n, int sum) {

		// System.out.println("inside subarray");
		int check = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				for (int k = i; k <= j; k++) {

					check = check + arr[k];
					if (check == sum) {
						return true;
					}
				}

			}
		}
		return false;
	}

	public static void main(String[] args) {

		SubarrayWithGivenSum arraysum = new SubarrayWithGivenSum();
		Scanner sc = new Scanner(System.in);
		int n;
		int sum;
		System.out.print("Enter the number of elements you want to store: ");
		n = sc.nextInt();
		System.out.println("Enter Sum:");
		sum = sc.nextInt();
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
		System.out.println("Ans is:");
		System.out.println(arraysum.subArraySum(arr, n, sum));

	}

}
