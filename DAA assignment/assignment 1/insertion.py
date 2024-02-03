def insertion(A,size):
    key=0
    j=0
    i=0
    for j in range(1,size):
        key=A[j]
        i=j-1
        while(i>=0 and A[i]>key):
            A[i+1]=A[i]
            i=i-1
        A[i+1]=key
        
def printarray(A,size):
    for i in range(0,size):
        print(A[i],end=" ")
    
A=[12,4,-2,5,0]
n=len(A)
print("before : ")
printarray(A,n)
print("\nafter : ")
insertion(A,n)
printarray(A,n)