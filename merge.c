/*
Step 1 − if it is only one element in the list it is already sorted, return.
Step 2 − divide the list recursively into two halves until it can no more be divided.
Step 3 − merge the smaller lists into new list in sorted order.
*/

#include <stdio.h>
void merge(int arr[], int p, int q, int r) {
   int n1 = q - p + 1;
   int n2 = r - q;

   int L[n1], M[n2];

   for (int i = 0; i < n1; i++)
       L[i] = arr[p + i];
   for (int j = 0; j < n2; j++)
       M[j] = arr[q + 1 + j];

   int i, j, k;
   i = 0;
   j = 0;
   k = p;

   while (i < n1 && j < n2) {
       if (L[i] <= M[j]) {
           arr[k] = L[i];
           i++;
       } else {
           arr[k] = M[j];
           j++;
       }
       k++;
   }

   while (i < n1) {
       arr[k] = L[i];
       i++;
       k++;
   }

   while (j < n2) {
       arr[k] = M[j];
       j++;
       k++;
   }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
   if (l < r) {

       // m is the point where the array is divided into two subarrays
       int m = l + (r - l) / 2;

       mergeSort(arr, l, m);
       mergeSort(arr, m + 1, r);

       // Merge the sorted subarrays
       merge(arr, l, m, r);
   }
}

// Print the array
void printArray(int arr[], int size) {
   for (int i = 0; i < size; i++)
       printf("%d ", arr[i]);
   printf("\n");
}

// Driver program
int main() {
   int arr[20],size;
   printf("Enter the length of an array less than or equal to 20\n");
   scanf("%d",&size);
   printf("Insert the elements in the array for %d size\n",size);
   for(int i=0;i<size;i++){
       scanf("%d",&arr[i]);
   }
   printf("Unsorted Array\n");
   printArray(arr, size);

   mergeSort(arr, 0, size - 1);

   printf("Sorted array: \n");
   printArray(arr, size);
}


