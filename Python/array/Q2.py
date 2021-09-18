

def solve(arr,x,k):
    n=len(arr)  #13
    
    for i in range(0,n,k):     #(0,13,5)  2 times this loop will run

        for j in range(0,k): #(0,5)  (5,10)
            if(arr[i+j]==x):
                break
        
        if(j==k):
            return False
        
    if(i==n):
        return True
    
    for j in range(i-k,n):
        if(arr[j]==x):
            break
    if j==n:
        return False
    
    return True


        
                
    
       
       


        




def main():
    arr=[21, 0, 56, 65, 34, 54, 76, 32, 0, 45, 21, 0, 25]
    x=23 #search this element
    k=5 #window size
    ans=solve(arr,x,k)
    print(ans)


if __name__ == "__main__":
    main()













