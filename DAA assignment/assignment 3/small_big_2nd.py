def find2ndsmallest(arr,n):
    small=0
    small2=-1
    for i in range(1,n):
        if arr[i]<arr[small]:
            small=i
    for i in range(0,n):
        if arr[i]!=arr[small]:
            if small2==-1:
                small2=i
            if arr[i]<arr[small2]:
                small2=i
    return small2
def find2ndlargest(arr,n):
    large=0
    large2=-1
    for i in range(1,n):
        if arr[i]>arr[large]:
            large=i
    for i in range(0,n):
        if arr[i]!=arr[large]:
            if large2==-1:
                large2=i
            if arr[i]>arr[large2]:
                large2=i
    return large2
arr=[1,2,3,4,5,6,7,8,9]
small2nd=find2ndsmallest(arr,len(arr))
large2nd=find2ndlargest(arr,len(arr))
print("2nd largest : ",arr[large2nd])
print("2nd smallest : ",arr[small2nd])