def partition(arr,low,high):
    pivot=arr[high]
    i=low-1
    j=0
    for j in range(low,high):
        if arr[j]<pivot:
            i=i+1
            arr[i],arr[j]=arr[j],arr[i]
    arr[i+1],arr[high]=arr[high],arr[i+1]
    return (i+1)
def quicksort(arr,low,high):
    if low<high:
        q=partition(arr,low,high)
        quicksort(arr,low,q-1)
        quicksort(arr,q+1,high)
arr=[10,7,8,9,1,5]
n=6#size of array
print("unsorted array : ",arr)
quicksort(arr,0,n-1)
print("sorted array : ",arr)