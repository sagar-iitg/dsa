

def count_no_of_set_bits1(n):
    c=0
    while(n):
        if n%2!=0:
            c=c+1
            n=n//2
           
        else: 
            n=n//2
    return c
            

#driver code
if __name__ == "__main__":
    res=count_no_of_set_bits1(31)
    print(res)

