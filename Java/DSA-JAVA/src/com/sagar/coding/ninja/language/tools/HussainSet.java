package com.sagar.coding.ninja.language.tools;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class HussainSet {

	public static void main(String[] args) {

		int n, m;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		m = sc.nextInt();
		ArrayList<Integer> arr = new ArrayList<>();

		for (int i = 0; i < n; i++) {
			arr.add(sc.nextInt());
		}

		// sc.close();
		Collections.sort(arr);
		// System.out.println("Array is: " + arr);
		Queue<Integer> q = new LinkedList<>();
		int count_m = 0;
		int end_p = n - 1;
		System.out.println("---------");
		while (m > 0) {

			int curr_m;
			curr_m = sc.nextInt();
			int ans = 0;
			for (; count_m < curr_m; count_m++) {
				if (end_p >= 0 && (q.isEmpty() || arr.get(end_p) >= q.element())) {
					ans = arr.get(end_p);
					end_p--;
				} else {
					ans = q.element();
					q.remove();
				}
				q.add(ans / 2);

			}

			System.out.println(ans);
			m--;

		}

	}
}
