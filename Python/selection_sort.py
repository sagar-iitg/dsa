#selection_sort function

def selection_sort(arr):
    for i in range(0,len(arr)-1):
        min_index=i;
        for j in range(i+1,len(arr)):
            if arr[j] < arr[min_index]:
                min_index=j;
        arr[i],arr[min_index]=arr[min_index],arr[i]


            
arr=[2,5,3,7,9,0,-5,-1]
print("Before Sorting")

for i in range(0,len(arr)):
    print(arr[i],end=" ")
  
  
selection_sort(arr)
print("\n")
print("After Sorting")

for i in range(0,len(arr)):
    print(arr[i],end=" ")  
    
