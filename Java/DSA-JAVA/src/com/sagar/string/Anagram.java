package com.sagar.string;

import java.util.Arrays;


public class Anagram {

	public static void main(String[] args) {
		
		String str1="restful";
		String str2="fluster";
		
		System.out.println(checkAnagram(str1,str2));

		
	}

	private static boolean checkAnagram(String str1, String str2) {
		
		char[] char1=str1.toCharArray();
		char[] char2=str2.toCharArray();
		
		
		Arrays.sort(char1);
		Arrays.sort(char2);
		//System.out.println(char1);
		//System.out.println(char2);
		
		
		
		
		if(str1.length()!=str2.length()) {
			return false;
		}
		for(int i=0;i<str1.length();i++) {
			
			if(char1[i]!=char2[i]) {
				return false;
			}
		}
		return true;
		
		
	}
	
	
	
	
}
