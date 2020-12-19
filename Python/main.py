# Python3 implementation of the above approach. 

# Function to return the vertical order 
# traversal of 
def printVertically(s): 
	s = s.split(" ") 
	result = "" 
	
	# Hashmap to store the indices 
	# of the characters 
	map = dict() 
	mx = 0

	# Finding maximum length word 
	# from given string 
	for i in s: 
		mx = max(mx, len(i)) 
	n = mx 
	i = 0
	while (i < mx): 
		
		# Inserting strings in the hashmap 
		# in vertical fashion 
		# based on character index 
		for j in s: 
			if i >= len(j): 
				map[i] = map.get(i, "") + "$" 
			else: 
				map[i] = map.get(i, "") + j[i] 
		i += 1	

	# Adding all values in the list 
	for j in range(mx): 
		result += map[j] + " "
	return result 

# Driver code 
if __name__ == '__main__': 
	st = "ge ek sfor ge eks"
	print(printVertically(st)) 

# This code is contributed by mohit kumar 29 












