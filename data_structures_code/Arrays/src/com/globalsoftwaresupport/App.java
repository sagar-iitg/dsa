package com.globalsoftwaresupport;

import java.util.ArrayList;
import java.util.List;

public class App {

	public static void main(String[] args) {
		
		// ArrayLists use standard arrays under the hood
		// capacity = 10
		List<String> names = new ArrayList<>();
		
		names.add("Kevin");
		names.add("Daniel");
		names.add("Adam");
		names.add("Ana");
		
		// O(N)
		// names.remove(0);
		// System.out.println(names.get(0));
		System.out.println(names.size());
		
		for(String name : names)
			System.out.println(name);
		
		
		
		
		
		
		
		
		// arrays are not dynamic data structures - we have to define the size in advance
		int[] nums = new int[10];
		
		// random indexing: we can use the indexes of the array slots
		// O(1)
		for(int i=0;i<10;++i)
			nums[i] = i;
		
		// we know the index of the item we want to manipulate
		// nums[0] = 100;
		
		// if we do not know the index of the item (search)
		// LINEAR SEARCH O(N) - if we do not know the index of the item we are looking for
		// we want to find the index of item 6
		
		//for(int i=0;i<10;++i)
			//if(nums[i]==6)
				//System.out.println("We have found the item at index: "+i);
		
	}
}
