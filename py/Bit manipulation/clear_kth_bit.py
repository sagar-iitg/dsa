

def clear_kth_bit(n,k):
    return (n & ~(1<<(k-1)))


#indexing starts from 1

#101
#001

#100 clearing 1st bit
#Driver code
print("Enter n value:")

n=int(input()) #n=5
print("Enter k value:")
k=int(input())  #k=1

print(clear_kth_bit(n,k))
