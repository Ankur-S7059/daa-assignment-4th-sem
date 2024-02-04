m=3
n=4
#m is no. of rows
#n is no. of columns
def search1darray(arr,k):
    low=0
    high=n-1
    while low<=high:
        mid=low+(high-low)//2
        if arr[mid]==k:
            return True
        elif arr[mid]<k:
            low=mid+1
        else:
            high=mid-1
    return False
def searchMatrix(arr,k):
    low=0
    high=m-1
    while low<=high:
        mid=low+(high-low)//2
        if k>=arr[mid][0] and k<=arr[mid][n-1]:
            return search1darray(arr[mid],k)
        elif k<arr[mid][0]:
            high=mid-1
        else:
            low=mid+1
    return False
arr=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]
k=10 # element to be searched
if(searchMatrix(arr,k)):
    print(k," is found")
else:
    print(k," is not found")
