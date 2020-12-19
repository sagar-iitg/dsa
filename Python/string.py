

arr=["Daisy","Rose","Hyacinth","Poppy"]

res=[list(sub) for sub in arr] 
print(res)
ans=""
for row in res:
    for item in row:
        ans=ans+item
        print(item, end = " ")
    ans=ans+" "
print(ans)



 
 