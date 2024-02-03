A=[1,2,3,4,5]
key=int(input("Enter key : "))
pos=-1
for i in range(0,len(A)):
    if(key==A[i]):
        pos=i
        break
if pos!=-1:
    print("key found at",pos)
else:
    print("key not found")