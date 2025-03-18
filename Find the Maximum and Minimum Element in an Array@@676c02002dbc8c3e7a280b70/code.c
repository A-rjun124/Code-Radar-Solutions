// Your code here...
#include <stdio.h>

void findMaxMin(int arr[], int n, int result[]) {
    result[0] = arr[0]; // Initialize max
    result[1] = arr[0]; // Initialize min

    for (int i = 1; i < n; i++) {
        if (arr[i] > result[0]) {
            result[0] = arr[i]; // Update max
        }
        if (arr[i] < result[1]) {
            result[1] = arr[i]; // Update min
        }
    }
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

    int result[2]; // Array to store max and min
    findMaxMin(arr, n, result);

    printf("%d", result[0]);
    printf("%d", result[1]);

    return 0;
}