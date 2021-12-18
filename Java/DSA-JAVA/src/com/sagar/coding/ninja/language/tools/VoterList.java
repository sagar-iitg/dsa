package com.sagar.coding.ninja.language.tools;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class VoterList {

	public static void main(String[] args) {

		int N1, N2, N3;
		Scanner sc = new Scanner(System.in);
		N1 = sc.nextInt();
		N2 = sc.nextInt();
		N3 = sc.nextInt();

		ArrayList<Integer> l1 = new ArrayList<>(N1);
		ArrayList<Integer> l2 = new ArrayList<>(N2);
		ArrayList<Integer> l3 = new ArrayList<>(N3);

		for (int i = 0; i < N1; i++) {
			l1.add(sc.nextInt());
		}
		for (int i = 0; i < N2; i++) {
			l2.add(sc.nextInt());
		}
		for (int i = 0; i < N3; i++) {
			l3.add(sc.nextInt());
		}

		l1.addAll(l2);
		l1.addAll(l3);
		// System.out.println(l1);
		Collections.sort(l1);
		// System.out.println(l1);
		ArrayList<Integer> ans = new ArrayList<>();

		int size = l1.size();
		// System.out.println(size);
		int i = 0;
		while (i < size) {

			if (i == size - 1) {
				break;
			}
			if (l1.get(i) == l1.get(i + 1)) {
				if (l1.get(i + 1) == l1.get(i + 2)) {
					ans.add(l1.get(i));
					// System.out.println(l1.get(i));
					i = i + 3;
					continue;
				}
				ans.add(l1.get(i));
				// System.out.println(l1.get(i));
				i = i + 2;
				continue;

			}
			i = i + 1;
		}
		System.out.println(ans.size());
		// System.out.println(ans);

		for (int j = 0; j < ans.size(); j++) {
			System.out.println(ans.get(j));
		}
	}

}
