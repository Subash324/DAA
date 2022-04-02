#include<stdio.h>
int main()
{
    int arr[5];
    int len;
    int i;
    printf("Enter the length of an array\n");
    scanf("%d",&len);
    printf("Enter the array values\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

    bubbleSort(arr,len);
}

int bubbleSort(int arr[],int len)
{
        for(int i=0;i<len-1;i++)
            for(int j=0;j<len-i-1;j++){
                if (arr[j]>arr[j+1])
                    swap(&arr[j],&arr[j+1]);
            }

    printf("This is the sorted array\n");
    for(int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }



}
void swap(int *a,int *b)

{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
