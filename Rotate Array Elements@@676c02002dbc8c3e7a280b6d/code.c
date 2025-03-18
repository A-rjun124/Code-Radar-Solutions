// Your code here...
#include <stdio.h>
int n; /* Size of the array */

void printArray(int arr[]);
void rotateByOne(int arr[]);


int main()
{
    int i, k;
    int arr[100];

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);

    /* Actual rotation */
    k = k % n;

    /* Print array before rotation */
   
    

    /* Rotate array n times */
    for (i = 0; i < k; i++) {
int x = arr[0];
for (j = 0; j < n; j++) {
 temp=arr[j];
 arr[j] = arr[j + 1];
 arr[j+1]=temp;
}
arr[n - 1] = x;
 }

    /* Print array after rotation */
    
    printArray(arr);

    return 0;
}


// void rotateByOne(int arr[])
// {
//     int i, last;

//     /* Store last element of array */
//     last = arr[n - 1];

//     for(i=n-1; i>0; i--)
//     {
//         /* Move each array element to its right */
//         arr[i] = arr[i - 1];
//     }

//     /* Copy last element of array to first */
//     arr[0] = last;
// }


/**
 * Print the given array
 */
void printArray(int arr[])
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
}