A=[]
size=int(input("Enter size : "))
for i in range(0,size):
    print("Enter value ",i," : ")
    temp=int(input())
    A.append(temp)
print("Enter key : ")
key=int(input())
for i in range(0,size):
    for j in range(i+1,size):
        if(A[i]+A[j])==key:
            print(A[i],A[j])