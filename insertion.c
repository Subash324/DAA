/*
To sort an array of size n in ascending order:
1: Iterate from arr[1] to arr[n] over the array.
2: Compare the current element (key) to its predecessor.
3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.
*/
#include<stdio.h>
void insertionSort(int [],int);
void swap(int,int);
int main(){
   int arr[20],len;
   printf("Enter the length of an array less than or equal to 20\n ");
   scanf("%d",&len);
   printf("Enter the elements of an array of length %d:",len);
   for(int i=0;i<len;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("The Unsorted array is:\n");
   for(int i=0;i<len;i++)
   {
       printf("%d, ",arr[i]);
   }
   insertionSort(arr,len);
   return 0;
}

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++) {
       key = arr[i];
       j = i - 1;

       while (j >= 0 && arr[j] > key) {
           arr[j + 1] = arr[j];
           j = j - 1;
       }
       arr[j + 1] = key;
   }
   printf("\nThe Unsorted array is:\n");
   for(int i=0;i<n;i++)
   {
       printf("%d, ",arr[i]);

   }
}

