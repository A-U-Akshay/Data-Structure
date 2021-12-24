//Binary Search

#include<stdio.h>

int binary(int arr[],int size,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high)
    {
      mid=(low+high)/2;
      if(arr[mid]==element)
       {
         return mid;
       }

      else if (arr[mid]<element)
       {
         low=mid+1;
       }

      else
       {
         high=mid-1;
       }
    }  
    return -1; 
}

int main()
{
    //Elements must be sorted
    int arr[]={2,10,16,22,28,37,46,51,77};
    int element,size;
    size=sizeof(arr)/sizeof(int);
    printf("Enter the element to be searched :");
    scanf("%d",&element);
    int searched_index;
    searched_index=binary(arr,size,element);
    printf("The element %d found at :%d",element,searched_index);
    return 0;
}