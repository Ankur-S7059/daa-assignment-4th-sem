def findbitonic(arr,n):
    left=0
    right=n-1
    while left<=right:
        mid=left+(right-left)//2
        if arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]:
            return mid
        elif arr[mid]>arr[mid-1]:
            left=mid+1
        else:
            right=mid-1
    return -1
arr=[1,3,5,7,10,8,6,4,2]
btpt=findbitonic(arr,len(arr))
if btpt!=-1:
    print("the bitonic point is ",arr[btpt])
else:
    print("no bitonic point present")