'''
Given an array A[] and a number x,
check for pair in A[] with sum as x

'''



def solve(arr,sum):
    arr.sort()
    i=0
    j=len(arr)-1
    while(i < j):
        if(arr[i]+arr[j]==sum):
            print(arr[i]," ",arr[j])
            exit()
        elif arr[i]+arr[j]>sum:
            j-=1
        elif arr[i]+arr[j]<sum:
            i+=1
     
    print("No valid pair exist")


def main():
    arr=[1, -2, 1, 0, 5]
    sum=0
    solve(arr,sum)


if __name__ == "__main__":
    main()
