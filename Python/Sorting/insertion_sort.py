def insertion_sort(arr):
    for i in range(1,len(arr)):
        key=arr[i]
        j=i-1
        while j>=0 and arr[j] > key:
            arr[j+1]=arr[j]
            j=j-1
        arr[j+1]=key


arr=[5,4,2,3,66,44,77]
print("Before sorting")
for i in range(0,len(arr)):
    print(arr[i],end=' ')
print("\n")    

print("After Sorting")
insertion_sort(arr)
for i in range(0,len(arr)):
    print(arr[i],end=' ')
