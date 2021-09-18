#Brute force method


def window_sliding(arr,k):
    n=len(arr)
    curr_sum=0
    for i in range(0,k):
        curr_sum=curr_sum+arr[i]
    
    window_sum=curr_sum
    for j in range(k,n):
        window_sum=window_sum+arr[j]-arr[j-k]
        curr_sum=max(window_sum,curr_sum)

    return curr_sum

    
    
     
        
    

def main():
    arr=[1, 4, 2, 10, 23, 3, 1, 0, 20]
    #arr=[100, 200,300,400]
    k=4 #window size
    ans=window_sliding(arr,k)
    print(ans)





if __name__ == "__main__":
    main()
