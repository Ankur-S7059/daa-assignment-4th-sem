'''m=3
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
            return search1darray(arr[mid],mid)
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
    print(k," is not found")'''
    
# Python 3 program to find whether a given 
# element is present in the given 2-D matrix

M = 3
N = 4

# Basic binary search to find an element 
# in a 1-D array
def binarySearch1D(arr, K):
	low = 0
	high = N - 1
	while (low <= high):
		mid = low + int((high - low) / 2)

		# if element found return true
		if (arr[mid] == K):
			return True

		# if middle less than K then skip 
		# the left part of the array 
		# else skip the right part
		if (arr[mid] < K):
			low = mid + 1
		else:
			high = mid - 1

	# if not found return false
	return False

# Function to search an element in a matrix 
# based on Divide and conquer approach
def searchMatrix(matrix, K):
	low = 0
	high = M - 1
	while (low <= high):
		mid = low + int((high - low) / 2)

		# if the element lies in the range
		# of this row then call
		# 1-D binary search on this row
		if (K >= matrix[mid][0] and
			K <= matrix[mid][N - 1]):
			return binarySearch1D(matrix[mid], K)

		# if the element is less than the
		# starting element of that row then
		# search in upper rows else search
		# in the lower rows
		if (K < matrix[mid][0]):
			high = mid - 1
		else:
			low = mid + 1

	# if not found
	return False

# Driver code
if __name__ == '__main__':
	matrix = [[1, 3, 5, 7],
			[10, 11, 16, 20],
			[23, 30, 34, 50]]
	K = 3
	if (searchMatrix(matrix, K)):
		print("Found")
	else:
		print("Not found")

# This code is contributed by
# Shashank_Sharma
