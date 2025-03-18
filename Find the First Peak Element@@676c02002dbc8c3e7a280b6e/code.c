// Your code here...
#include <stdio.h>

// Function to find a peak element
int findPeak(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Check the boundary and neighbors
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1])) {
            return arr[i];
        }
    }
    return -1; // No peak found (should not happen for valid input)
}

int main() {
    int n;
    // printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int peak = findPeak(arr, n);
    if (peak != -1) {
        printf("%d", peak);
    } 

    return 0;
}
