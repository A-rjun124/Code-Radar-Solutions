// Your code here...
#include<stdio.h>
void rotateArr(int arr[], int n, int d) {
    
    // Handle case when d > n
    d %= n;
  
    // Storing rotated version of array
    int temp[n];

    // Copy last d elements to the front of temp
    for (int i = 0; i < d; i++)
        temp[i] = arr[n - d + i];

    // Copy the first n - d elements to the back of temp
    for (int i = 0; i < n - d; i++)
        temp[i + d] = arr[i];

    // Copying the elements of temp in arr to get the 
    // final rotated array
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}
void main()
{int a[50],k,n;
scanf("%d",&n);
for(int i=0;i<=n;i++)
scanf("%d",&a[i]);
scanf("%d",k);
rotateArr(arr, n, d);

    // Print the rotated array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

}