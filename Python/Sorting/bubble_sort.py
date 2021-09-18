def bubble_sort(arr):
    n=len(arr)
    for i in range(0,n-1):
        for j in range(0,n-1-i):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
                
    
    
arr=[1,22,10,-5,4]

print("array is")
for i in range(len(arr)):
    print("%d" %arr[i],end=" ")

print("\n")
bubble_sort(arr)
print("sorted array is")
for i in range(len(arr)):
    print("%d" %arr[i],end=" ")
    
    
    
