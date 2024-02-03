#include <stdio.h>

// Function to perform binary search in a 1D array
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Target not found
}

// Function to perform binary search in a 2D matrix
int searchMatrix(int matrix[][4], int rows, int columns, int target) {
    int row = 0;
    int col = columns - 1;

    while (row < rows && col >= 0) {
        if (matrix[row][col] == target) {
            printf("Element found at position (%d, %d)\n", row, col);
            return 1;
        } else if (matrix[row][col] < target) {
            row++;
        } else {
            col--;
        }
    }

    printf("Element not found in the matrix.\n");
    return 0;
}

int main() {
    int matrix[4][4] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int rows = 4;
    int columns = 4;

    int target;
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    searchMatrix(matrix, rows, columns, target);

    return 0;
}