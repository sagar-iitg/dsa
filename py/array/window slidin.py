#Brute force method


def window_sliding(arr,k):
    n=len(arr)
    res=0
    for i in range(0,n-k+1):
        sum=0
        for j in range(i,k+i):
            sum=sum+arr[j]
        res=max(res,sum)
    return res
        
    

def main():
    #arr=[1, 4, 2, 10, 23, 3, 1, 0, 20]
    arr=[100, 200,300,400]
    k=2 #window size
    ans=window_sliding(arr,k)
    print(ans)





if __name__ == "__main__":
    main()
