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
		result += map[j]
	return result 

def list_to_string(arr):
    res=[list(sub) for sub in arr] 
    ans=""
    for row in res:
        for item in row:
            ans=ans+item
        ans=ans+" "
    return ans
        
arr=["Daisy","Rose","Hyacinth","Poppy"]
print("-------")
print("Input is:\n")
print(arr)
str=list_to_string(arr)
#print(str)


st=printVertically(str)
#print(st)
#print(len(st))

#print(type(st))
print("--------------")
print("Output is:\n")

output=""
for i in st:
    if(i=='$'):
        continue
    else:
        output=output+i
print(output)






