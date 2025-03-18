// Your code here...
#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where k is greater than n
    int temp[k];

    // Copy last k elements to a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the rest of the array to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy elements from the temporary array to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    //printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    //printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    //printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}