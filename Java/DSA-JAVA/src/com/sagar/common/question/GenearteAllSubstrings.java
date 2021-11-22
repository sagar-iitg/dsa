package com.sagar.common.question;

public class GenearteAllSubstrings {

	private void printSubArray(String s) {

		int n = s.length();
		// System.out.println(s);

		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				for (int k = i; k <= j; k++) {
					System.out.print(s.charAt(k));
				}
				System.out.println();
			}
			System.out.println();
		}

	}

	public static void main(String[] args) {

		GenearteAllSubstrings obj = new GenearteAllSubstrings();
		String str = "Sagar";

		obj.printSubArray(str);

	}

}
