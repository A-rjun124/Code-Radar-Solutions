// Your code here...
#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Array is not sorted
        }
    }
    return 1; // Array is sorted
}

int main() {
    int n;
    //printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isSorted(arr, n)) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}