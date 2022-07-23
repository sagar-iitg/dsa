

#101
#k=1

#100
def toggle_kth_bit(n,k):
    return (n^(1<<(k-1)))


#driver code

res=toggle_kth_bit(5,2)
print(res)
